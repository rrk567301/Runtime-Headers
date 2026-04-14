@class LNAsyncSequenceReference, LNAsyncIteratorReference, LNAsyncIteratorOptions;

@interface LNAsyncIteratorCreateOperation : LNInterfaceConnectionOperation

@property (readonly, copy, nonatomic) LNAsyncSequenceReference *sequence;
@property (readonly, copy, nonatomic) LNAsyncIteratorOptions *options;
@property (copy, nonatomic) LNAsyncIteratorReference *iteratorReference;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void)start;
- (void)finishWithError:(id)a0;
- (void).cxx_destruct;
- (id)initWithConnectionInterface:(id)a0 sequence:(id)a1 options:(id)a2 queue:(id)a3 completionHandler:(id /* block */)a4;

@end
