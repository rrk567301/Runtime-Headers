@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group, OS_dispatch_semaphore;

@interface MADProcessingNode : NSObject {
    NSObject<OS_dispatch_queue> *_inputQueue;
    NSObject<OS_dispatch_semaphore> *_inputSemaphore;
    NSObject<OS_dispatch_queue> *_processQueue;
    NSObject<OS_dispatch_queue> *_kernelQueue;
    NSObject<OS_dispatch_queue> *_childrenQueue;
    NSObject<OS_dispatch_group> *_group;
    int _inputCount;
    BOOL _isCanceled;
    BOOL _isRunning;
    BOOL _isFailed;
}

@property (readonly) NSMutableArray *children;

- (id)initWithQueue:(id)a0;
- (id)init;
- (int)setDispatchGroup:(id)a0;
- (void).cxx_destruct;
- (BOOL)hasFailure;
- (void)cancelProcessing;
- (BOOL)addChild:(id)a0 error:(id *)a1;
- (id)combineResults:(id)a0 withOtherResults:(id)a1;
- (BOOL)processInput:(id)a0 error:(id *)a1;
- (id)waitForResultsWithError:(id *)a0;

@end
