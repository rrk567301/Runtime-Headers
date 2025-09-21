@class PLLibraryServicesManager, NSFileManager, PLPhotoLibraryPathManager;

@interface PLPhotoLibraryImportValidation : NSObject {
    PLLibraryServicesManager *_libraryServicesManager;
    NSFileManager *_fm;
    PLPhotoLibraryPathManager *_pm;
}

- (void).cxx_destruct;
- (char)checkLibraryCPLStatusWithError:(id *)a0;
- (char)checkLegacyLibraryRequiresRepairWithError:(id *)a0;
- (char)checkLegacyLibraryVersionStatusWithError:(id *)a0;
- (char)checkLibraryVersionStatusWithError:(id *)a0;
- (id)initWithLibraryManager:(id)a0;
- (char)isLibraryValidForImportWithError:(id *)a0;

@end
