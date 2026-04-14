@class NSOperationQueue;

@interface DDMAssetURLProtocolCoordinator : NSObject {
    NSOperationQueue *_urlLoadingQueue;
}

+ (id)sharedCoordinator;

- (void).cxx_destruct;
- (id)init;
- (id /* block */)addURLProtocolWithResumeBlock:(id /* block */)a0;

@end
