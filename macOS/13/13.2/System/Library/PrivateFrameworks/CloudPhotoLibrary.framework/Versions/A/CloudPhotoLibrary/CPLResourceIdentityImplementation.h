@interface CPLResourceIdentityImplementation : CPLResourceIdentity

+ (id)fingerPrintForData:(id)a0 error:(id *)a1;
+ (id)fingerPrintForFileAtURL:(id)a0 error:(id *)a1;
+ (void)setMMCImplementationForPlatform:(id)a0;
+ (id)_fingerPrintForFD:(int)a0 error:(id *)a1;
+ (id)fingerPrintForFD:(int)a0 error:(id *)a1;
+ (BOOL)isValidMMCSV2Signature:(id)a0;
+ (id)zeroByteFileFingerPrint;
+ (id)identityFromStoredIdentity:(id)a0;
+ (id)fileUTIForExtension:(id)a0;
+ (id)extensionForFileUTI:(id)a0;
+ (id)storageNameForFingerPrint:(id)a0 fileUTI:(id)a1 bucket:(id *)a2;
+ (id)identityForStorageName:(id)a0;

- (id)identityForStorage;

@end
