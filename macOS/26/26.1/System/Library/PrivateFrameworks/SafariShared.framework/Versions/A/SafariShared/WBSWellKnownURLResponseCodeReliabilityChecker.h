@class NSURL, NSOperationQueue, NSURLSession;

@interface WBSWellKnownURLResponseCodeReliabilityChecker : NSObject {
    NSURL *_url;
    NSOperationQueue *_fetchOperationQueue;
    NSURLSession *_session;
    id /* block */ _completion;
}

- (void)cancel;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (void)checkReliabilityWithCompletion:(id /* block */)a0;

@end
