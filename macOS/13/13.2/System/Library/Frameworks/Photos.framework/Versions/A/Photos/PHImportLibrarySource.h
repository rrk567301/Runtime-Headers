@class NSURL, PLPhotoLibraryPathManager, NSDictionary;

@interface PHImportLibrarySource : PHImportUrlSource {
    NSURL *_libraryURL;
    NSDictionary *_renderResourcePathsByIdentifier;
}

@property (retain, nonatomic) PLPhotoLibraryPathManager *pathManager;

+ (id)importLibrarySourceForURL:(id)a0 exceptions:(id *)a1;
+ (id)supportedImportLibraryTypes;
+ (BOOL)_isValidPhotoLibrary:(id)a0 error:(id *)a1;

- (id)name;
- (void).cxx_destruct;
- (id)productKind;
- (BOOL)canReference;
- (BOOL)isLibrary;
- (id)initWithUrls:(id)a0;
- (BOOL)containsSupportedMediaWithImportExceptions:(id *)a0;
- (void)loadSidecarsFor:(id)a0;
- (void)beginProcessingWithCompletion:(id /* block */)a0;
- (id)assetsByProcessingItem:(id)a0;
- (id)_resourcePathsByUuidForPaths:(id)a0;
- (BOOL)_isValidPhotoLibraryWithError:(id *)a0;

@end
