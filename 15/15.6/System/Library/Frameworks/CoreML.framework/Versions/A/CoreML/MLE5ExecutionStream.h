@class NSArray, NSObject;
@protocol OS_dispatch_queue, MLE5ExecutionStreamOperationPool, OS_dispatch_source;

@interface MLE5ExecutionStream : NSObject

@property (copy, nonatomic) NSArray *operations;
@property (nonatomic) struct e5rt_execution_stream { } *streamHandle;
@property (retain, nonatomic) id<MLE5ExecutionStreamOperationPool> operationPool;
@property (nonatomic) long long state;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *resetQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *resetTimer;
@property (readonly, nonatomic) unsigned long long streamId;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_reset;
- (char)_executeStream:(struct e5rt_execution_stream { } *)a0 error:(id *)a1;
- (char)_prepareForInputFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (char)_reusableForInputFeatures:(id)a0 options:(id)a1;
- (void)_setANEExecutionPriorityWithOptions:(id)a0;
- (void)cancelPendingReset;
- (char)executeForInputFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (char)prepareAsyncSubmissionForInputFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (void)resetAfterLingering:(double)a0;
- (char)reusableForAsyncSubmissionForInputFeatures:(id)a0 options:(id)a1;
- (char)reusableForSyncPredictionForInputFeatures:(id)a0 options:(id)a1;
- (char)setupOperationForInputFeatures:(id)a0 operationPool:(id)a1 error:(id *)a2;
- (void)submitWithCompletionHandler:(id /* block */)a0;

@end
