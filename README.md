# What's this?

It's a kext that allows you to kernel panic your macOS basically

# How to use?

You need Lilu.kext injected first (assuming you are using OpenCore already) and then this kext injected below it (Note: [ProperTree](https://github.com/CorpNewt/ProperTree) already does this when you use OC snapshot)

# Boot Arguments

`-twkpoff` (or `-liluoff`) Disable the kext


`-twkpdbg` (or `-liludbgall`) Print debug lines for the kext


`-twkpbeta` (or `-lilubetaall`) Enable kext on higher unsupported macOS version

# Building the kext

You need Debug version of [Lilu.kext](https://github.com/acidanthera/Lilu/releases) and [MacKernelSDK](https://github.com/acidanthera/MacKernelSDK) in Root Directory of the Project first after cloning the repo then open it on Xcode (or with .xcodeproj file) then compile it as usual

# Credits

[Apple](https://apple.com) for macOS obviously


[AAGaming](https://vd-plugins.github.io/web/#this) This kext was inspired by this funny Vendetta plugin


[Visual](https://github.com/VisualEhrmanntraut) for helping me troubleshoot why the kext wasn't working lol


[RestrictEvents](https://github.com/acidanthera/RestrictEvents) for some code taken

