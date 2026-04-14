@interface CPLResourceIdentityImplementation : CPLResourceIdentity

+ (id)fingerPrintForFileAtURL:(id)a0 typeIdentifier:(id)a1 error:(id *)a2;
+ (id)identityFromStoredIdentity:(id)a0;
+ (id)fileUTIForExtension:(id)a0;
+ (id)fingerPrintForData:(id)a0 typeIdentifier:(id)a1 error:(id *)a2;
+ (id)_fingerPrintForFD:(int)a0 typeIdentifier:(id)a1 error:(id *)a2;
+ (id)extensionForFileUTI:(id)a0;
+ (void)setMMCImplementationForPlatform:(id)a0;
+ (id)fingerPrintForFD:(int)a0 typeIdentifier:(id)a1 error:(id *)a2;
+ (BOOL)isValidMMCSV2Signature:(id)a0;
+ (id)zeroByteFileFingerPrint;
+ (id)storageNameForFingerPrint:(id)a0 fileUTI:(id)a1 bucket:(id *)a2;
+ (id)identityForStorageName:(id)a0;

- (id)identityForStorage;

@end
