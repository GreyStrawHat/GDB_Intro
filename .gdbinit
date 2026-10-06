set disassembly-flavor intel

define init-gef
source ~/.gef-2024.06.py
gef config context.layout "code source stack memory"
end

