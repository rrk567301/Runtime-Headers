@class NSURL;

@interface PHImportLegacyLibrarySource : PHImportUrlSource {
    NSURL *_libraryURL;
}

- (id)name;
- (void).cxx_destruct;
- (id)initWithURLs:(id)a0;
- (id)productKind;
- (char)canReference;
- (char)containsSupportedMediaWithImportExceptions:(id *)a0;
- (char)isLibrary;
- (char)isReadonlyVolume;
- (void)loadSidecarsFor:(id)a0;

@end
