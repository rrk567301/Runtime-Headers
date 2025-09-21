@class NSURL, PLPhotoLibraryPathManager, NSDictionary;

@interface PHImportLibrarySource : PHImportUrlSource {
    NSURL *_libraryURL;
    NSDictionary *_renderResourcePathsByIdentifier;
}

@property (retain, nonatomic) PLPhotoLibraryPathManager *pathManager;

+ (char)_isValidPhotoLibrary:(id)a0 error:(id *)a1;
+ (id)importLibrarySourceForURL:(id)a0 exceptions:(id *)a1;
+ (id)supportedImportLibraryTypes;

- (id)name;
- (void).cxx_destruct;
- (id)initWithURLs:(id)a0;
- (id)productKind;
- (char)_isValidPhotoLibraryWithError:(id *)a0;
- (id)_resourcePathsByUuidForPaths:(id)a0;
- (id)assetsByProcessingItem:(id)a0;
- (void)beginProcessingWithCompletion:(id /* block */)a0;
- (char)canReference;
- (char)containsSupportedMediaWithImportExceptions:(id *)a0;
- (char)isLibrary;
- (void)loadSidecarsFor:(id)a0;

@end
