@class TSUZipArchive, TSUTemporaryDirectory;

@interface TSPFilePackage : TSPPackage {
    TSUZipArchive *_componentZipArchive;
    TSUTemporaryDirectory *_componentZipArchiveTemporaryDirectory;
}

+ (char)isValidOrEmptyPackageOrTangierEditingFormatAtURL:(id)a0 hasNativeUTI:(char)a1;
+ (char)isValidPackageAtURL:(id)a0;
+ (char)isValidPackageAtZipArchive:(id)a0;
+ (char)isValidTangierEditingFormatAtURL:(id)a0;
+ (char)isValidTangierEditingFormatAtZipArchive:(id)a0;
+ (unsigned long long)zipArchiveOptions;
+ (id)zipArchiveURLFromPackageURL:(id)a0;

- (void).cxx_destruct;
- (long long)packageType;
- (id)componentZipArchive;
- (char)didReloadZipArchive:(id)a0 packageURL:(id)a1 error:(id *)a2;
- (char)hasDataAtRelativePath:(id)a0;
- (id)newDataStorageAtRelativePath:(id)a0 decryptionInfo:(id)a1 materializedLength:(unsigned long long)a2 packageURL:(id)a3 lastModificationDate:(out id *)a4;
- (id)newDocumentPropertiesWithURL:(id)a0 zipProvider:(id /* block */)a1 error:(id *)a2;
- (id)newRawDataReadChannelAtRelativePath:(id)a0;
- (id)packageEntryInfoAtRelativePath:(id)a0 error:(id *)a1;
- (void)prepareForDocumentReplacementWithSuccess:(char)a0 forSafeSave:(char)a1 originalURL:(id)a2;

@end
