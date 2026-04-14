@class NSMutableArray, Protocol;

@interface TSCEDistributor : NSObject

@property (readonly, nonatomic) Protocol *protocol;
@property (readonly, nonatomic) NSMutableArray *receivers;

- (id)init;
- (void).cxx_destruct;
- (void)disconnect;
- (void)addReceiver:(id)a0;
- (void)removeReceiver:(id)a0;
- (BOOL)hasReceiver:(id)a0;
- (void)addReceiverIfMissing:(id)a0;
- (void)dropAllTargets;
- (void)distributeBlock:(id /* block */)a0;
- (void)suspendDuringBlock:(id /* block */)a0;

@end
