{
    "version": "2.0.0",
    "tasks": [
        {
            "label": "Compile and Run with Input/Output",
            "type": "shell",
            "command": "cmd.exe",
            "args": [
                "/C",
                "copy /Y \"${file}\" \"${workspaceFolder}\\jspwTest.cpp\" && g++ \"${workspaceFolder}\\jspwTest.cpp\" -o \"${workspaceFolder}\\jspwTest.exe\" && (\"${workspaceFolder}\\jspwTest.exe\" < \"${workspaceFolder}\\input.txt\") > \"${workspaceFolder}\\output.txt\" && del \"${workspaceFolder}\\jspwTest.exe\" && del \"${workspaceFolder}\\jspwTest.cpp\""
            ],
            "problemMatcher": [],
            "presentation": {
                "reveal": "always",
                "echo": true,
                "focus": false,
                "panel": "shared"
            },
            "group": {
                "kind": "build",
                "isDefault": true
            }
        }
    ]
}
