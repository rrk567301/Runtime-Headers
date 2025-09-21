@class LNAsyncSequenceReference;

@interface LNAsyncSequenceReleaseOperation : LNInterfaceConnectionOperation

@property (readonly, copy, nonatomic) LNAsyncSequenceReference *sequence;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void)start;
- (void)finishWithError:(id)a0;
- (void).cxx_destruct;
- (id)initWithConnectionInterface:(id)a0 sequence:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;

@end
