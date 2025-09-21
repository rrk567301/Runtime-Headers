@interface TSPDirectoryPackage : TSPPackage

+ (id)componentFileURLForPackageURL:(id)a0 packageLocator:(id)a1;
+ (char)isValidPackageAtURL:(id)a0;
+ (id)objectArchiveURLForPackageURL:(id)a0;
+ (unsigned long long)zipArchiveOptions;
+ (id)zipArchiveURLFromPackageURL:(id)a0;

- (long long)packageType;
- (void)copyComponent:(id)a0 toPackageURL:(id)a1 packageLocator:(id)a2 zipFileWriter:(id)a3 encryptionKey:(id)a4 canLink:(char)a5 completion:(id /* block */)a6;
- (id)dataAtRelativePath:(id)a0 allowDecryption:(char)a1 error:(id *)a2;
- (char)hasDataAtRelativePath:(id)a0;
- (id)newDataStorageAtRelativePath:(id)a0 decryptionInfo:(id)a1 materializedLength:(unsigned long long)a2 packageURL:(id)a3 lastModificationDate:(out id *)a4;
- (id)newDocumentPropertiesWithURL:(id)a0 zipProvider:(id /* block */)a1 error:(id *)a2;
- (id)newRawDataReadChannelAtRelativePath:(id)a0;
- (id)newRawReadChannelForComponentLocator:(id)a0 isStoredOutsideObjectArchive:(char)a1 error:(id *)a2;
- (id)packageEntryInfoAtRelativePath:(id)a0 error:(id *)a1;
- (id)packageEntryInfoForComponentLocator:(id)a0 isStoredOutsideObjectArchive:(char)a1;
- (void)prepareForDocumentReplacementWithSuccess:(char)a0 forSafeSave:(char)a1 originalURL:(id)a2;

@end
