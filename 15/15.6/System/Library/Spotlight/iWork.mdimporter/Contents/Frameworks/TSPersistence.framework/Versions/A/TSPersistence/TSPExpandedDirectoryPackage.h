@interface TSPExpandedDirectoryPackage : TSPDirectoryPackage

+ (char)hasZipArchive;
+ (char)isValidPackageAtURL:(id)a0;

- (id)newRawReadChannelForComponentLocator:(id)a0 isStoredOutsideObjectArchive:(char)a1 error:(id *)a2;
- (id)packageEntryInfoForComponentLocator:(id)a0 isStoredOutsideObjectArchive:(char)a1;
- (void)prepareForDocumentReplacementWithSuccess:(char)a0 forSafeSave:(char)a1 originalURL:(id)a2;

@end
