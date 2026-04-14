@interface TSPExpandedDirectoryPackage : TSPDirectoryPackage

+ (BOOL)isValidPackageAtURL:(id)a0;
+ (BOOL)hasZipArchive;

- (id)packageEntryInfoForComponentLocator:(id)a0 isStoredOutsideObjectArchive:(BOOL)a1;
- (id)newRawReadChannelForComponentLocator:(id)a0 isStoredOutsideObjectArchive:(BOOL)a1 error:(id *)a2;
- (void)prepareForDocumentReplacementWithSuccess:(BOOL)a0 forSafeSave:(BOOL)a1 originalURL:(id)a2;

@end
