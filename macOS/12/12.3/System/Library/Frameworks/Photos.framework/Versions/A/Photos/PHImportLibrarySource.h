@class NSURL, PLPhotoLibraryPathManager, NSDictionary;

@interface PHImportLibrarySource : PHImportUrlSource {
    NSURL *_libraryURL;
    NSDictionary *_renderResourcePathsByIdentifier;
}

@property (retain, nonatomic) PLPhotoLibraryPathManager *pathManager;

- (id)name;
- (void).cxx_destruct;
- (id)productKind;
- (BOOL)containsSupportedMediaWithImportExceptions:(id *)a0;
- (id)initWithUrls:(id)a0;
- (BOOL)canReference;
- (BOOL)isLibrary;
- (void)beginProcessingWithCompletion:(id /* block */)a0;
- (id)assetsByProcessingItem:(id)a0;
- (BOOL)_isValidPhotoLibraryWithError:(id *)a0;
- (id)resourcePathsByUuidForPaths:(id)a0;
- (void)loadSidecarsFor:(id)a0;

@end
