# set-github-secrets-HomeDesigner.ps1
# Sets the GitHub Actions secrets of the 'HomeDesigner' environment in Exoa-Interactive/HomeDesigner-Demos
# from the Apple signing files in D:\UNITY\EXOA\_APPLE_CERTS\ENV (see the README there).
# Used by: appstore-, ios-appstore-, ios-resign-upload-, notarize-HomeDesignerSuite.yml
#
# Usage:
#   .\set-github-secrets-HomeDesigner.ps1           # check the files, then upload
#   .\set-github-secrets-HomeDesigner.ps1 -DryRun   # only check the files
#
# Rerun it after renewing a certificate or provisioning profile (replace the file in ENV\<SECRET> first).

param([switch]$DryRun)

& "D:\UNITY\EXOA\_APPLE_CERTS\Set-AppleSecrets.ps1" `
    -Repo "Exoa-Interactive/HomeDesigner-Demos" `
    -Environment "HomeDesigner" `
    -BundleId "com.exoa.homedesigner" `
    -IosProfile "HomeDesignerSuite_iOS_ProdProfile.mobileprovision" `
    -MacProfile "HomeDesignerSuite_Mac_ProdProfile.provisionprofile" `
    -DryRun:$DryRun
