@class NSURL;

@interface PHImportLegacyLibrarySource : PHImportUrlSource {
    NSURL *_libraryURL;
}

- (id)name;
- (void).cxx_destruct;
- (id)productKind;
- (BOOL)canReference;
- (BOOL)isLibrary;
- (id)initWithUrls:(id)a0;
- (BOOL)containsSupportedMediaWithImportExceptions:(id *)a0;
- (BOOL)isReadonlyVolume;
- (void)loadSidecarsFor:(id)a0;

@end
