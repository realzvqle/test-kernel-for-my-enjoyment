@echo off


copy limine.conf limine\boot\limine\limine.conf
if exist image\image.vhd del image\image.vhd
if exist root rd root /s /q
md root
bin\robocopy.exe limine root /s
md root\system
copy kernel\oskrnl.elf root\system
echo Partition the drive now
bin\diskpart.exe /s c:\build\scripts\partition.txt
mkdir Z:\EFI\BOOT
bin\robocopy.exe root Z:\ /s
bin\diskpart.exe /s c:\build\scripts\detach.txt
