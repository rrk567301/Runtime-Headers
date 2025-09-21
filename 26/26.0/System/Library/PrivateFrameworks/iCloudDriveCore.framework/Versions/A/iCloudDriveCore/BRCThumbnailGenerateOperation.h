@class NSURL, NSString, BRCTapToRadarManager;

@interface BRCThumbnailGenerateOperation : _BRCOperation <BRCOperationSubclass> {
    NSURL *_url;
    BRCTapToRadarManager *_tapToRadarManager;
}

@property (readonly, nonatomic) NSURL *targetURL;
@property (copy, nonatomic) id /* block */ saveThumbnailCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldRetryForError:(id)a0;
- (void)main;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void)cancel;
- (void).cxx_destruct;
- (id)initWithDocumentAtURL:(id)a0 targetURL:(id)a1 timeout:(id)a2 sessionContext:(id)a3;

@end
