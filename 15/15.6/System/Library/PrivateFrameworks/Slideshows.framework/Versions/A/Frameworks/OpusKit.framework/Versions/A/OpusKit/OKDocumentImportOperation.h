@class NSURL, OKDocument;

@interface OKDocumentImportOperation : OFNSOperation {
    OKDocument *_document;
    NSURL *_resourceURL;
    char _opaque;
}

@property (retain, nonatomic) NSURL *temporaryDownloadedMediaFileURL;
@property (retain, nonatomic) NSURL *temporaryTranscodedMediaFileURL;
@property (retain, nonatomic) NSURL *temporaryThumbnailMediaFileURL;
@property (readonly, copy, nonatomic) NSURL *importedResourceURL;

- (void)dealloc;
- (id)init;
- (unsigned long long)launchOperation;
- (void)cancelOperation;
- (void)finishOperation;
- (void)cleanupOperation;
- (id)initWithDocument:(id)a0 resourceURL:(id)a1 importedResourceURL:(id)a2 opaque:(char)a3;

@end
