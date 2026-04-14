@class NSArray;

@interface MLE5ExecutionStream : NSObject

@property (nonatomic) struct e5rt_execution_stream { } *streamHandle;
@property (nonatomic) BOOL preparedForAsyncSubmission;
@property (copy, nonatomic) NSArray *operations;
@property (readonly, nonatomic) unsigned long long streamId;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (BOOL)_executeStream:(struct e5rt_execution_stream { } *)a0 error:(id *)a1;
- (BOOL)_prepareAndEncodeOperationsWithOptions:(id)a0 error:(id *)a1;
- (BOOL)executeWithOptions:(id)a0 error:(id *)a1;
- (BOOL)prepareAndEncodeOperationsForAsyncSubmission:(id)a0 error:(id *)a1;
- (void)submitWithCompletionHandler:(id /* block */)a0;

@end
