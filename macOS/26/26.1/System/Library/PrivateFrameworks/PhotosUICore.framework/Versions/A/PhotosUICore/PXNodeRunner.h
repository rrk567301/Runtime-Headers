@class NSOperationQueue;

@interface PXNodeRunner : NSObject {
    NSOperationQueue *_operationQueue;
}

@property long long maxConcurrentRunNodeCount;
@property long long qualityOfService;

- (void).cxx_destruct;
- (id)init;
- (void)_processRunGraph:(id)a0;
- (void)processGraphForRunNode:(id)a0;

@end
