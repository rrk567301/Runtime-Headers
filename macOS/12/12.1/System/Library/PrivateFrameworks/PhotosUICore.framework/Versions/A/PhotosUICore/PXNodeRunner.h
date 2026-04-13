@class NSOperationQueue;

@interface PXNodeRunner : NSObject {
    NSOperationQueue *_operationQueue;
}

@property long long maxConcurrentRunNodeCount;
@property long long qualityOfService;

- (id)init;
- (void).cxx_destruct;
- (void)processGraphForRunNode:(id)a0;
- (void)_processRunGraph:(id)a0;

@end
