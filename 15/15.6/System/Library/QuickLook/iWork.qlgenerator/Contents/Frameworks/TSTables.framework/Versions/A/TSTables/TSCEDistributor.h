@class NSMutableArray, Protocol;

@interface TSCEDistributor : NSObject {
    NSMutableArray *_receivers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _receiversLock;
}

@property (readonly, nonatomic) Protocol *protocol;
@property (readonly, nonatomic) char hasReceivers;

- (id)init;
- (void).cxx_destruct;
- (void)disconnect;
- (void)removeReceiver:(id)a0;
- (void)addReceiver:(id)a0;
- (char)hasReceiver:(id)a0;
- (void)addReceiverIfMissing:(id)a0;
- (void)distributeBlock:(id /* block */)a0;
- (void)dropAllTargets;
- (void)suspendDuringBlock:(id /* block */)a0;

@end
