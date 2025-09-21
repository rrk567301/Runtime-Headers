@class NSURL, NSOperationQueue;

@interface FPListRemoteVersionsOperation : FPOperation {
    NSURL *_documentURL;
    NSOperationQueue *_queue;
}

@property (nonatomic) char includeCachedVersions;

- (void).cxx_destruct;
- (id)initWithDocumentURL:(id)a0;
- (void)main;
- (id)fp_prettyDescription;
- (char)isSandboxExtensionConsumed;
- (void)presendNotifications;

@end
