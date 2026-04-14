@class NSMutableArray, NSString, NSArray, NSError, _MTL4CommitFeedbackDispatch, _MTL4CommandQueue;
@protocol MTLLogContainer;

@interface _MTL4CommitFeedback : NSObject <MTL4CommitFeedbackGGDPrivate> {
    _MTL4CommandQueue *_queue;
    _MTL4CommitFeedbackDispatch *_commitFeedbackDispatch;
    NSError *_error;
    unsigned long long _gpuStartTime;
    unsigned long long _gpuEndTime;
    NSMutableArray *_errors;
    id /* block */ _internalCompletionHandler;
    NSArray *_logs;
}

@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) double GPUStartTime;
@property (readonly, nonatomic) double GPUEndTime;
@property (nonatomic) id<MTLLogContainer> logs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (void)commandBufferComplete:(unsigned long long)a0 completionTime:(unsigned long long)a1 error:(id)a2 executeHandlers:(BOOL)a3;
- (id)initWithQueue:(id)a0 commitOptions:(id)a1 internalCompletionHandler:(id /* block */)a2;

@end
