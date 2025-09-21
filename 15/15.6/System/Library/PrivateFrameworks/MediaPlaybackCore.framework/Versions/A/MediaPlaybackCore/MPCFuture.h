@class NSMapTable, NSString, NSError, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface MPCFuture : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue;
@property (readonly, nonatomic) NSMutableArray *successBlocks;
@property (readonly, nonatomic) NSMutableArray *failureBlocks;
@property (readonly, nonatomic) NSMutableArray *completionBlocks;
@property (readonly, nonatomic) NSMapTable *invalidBlocks;
@property (readonly, nonatomic) id result;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic, getter=isFinalized) char finalized;
@property (readonly, nonatomic, getter=isInvalid) char invalid;
@property (readonly, nonatomic, getter=isDisconnected) char disconnected;
@property (copy, nonatomic) NSString *debugLabel;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)invalidate;
- (void)disconnect;
- (id)initWithQueue:(id)a0;
- (void)finishWithError:(id)a0;
- (id)onCompletion:(id /* block */)a0;
- (void)_onQueue_finalize;
- (void)finishWithValue:(id)a0;
- (id)onFailure:(id /* block */)a0;
- (id)onInvalid:(id /* block */)a0;
- (id)onSuccess:(id /* block */)a0;

@end
