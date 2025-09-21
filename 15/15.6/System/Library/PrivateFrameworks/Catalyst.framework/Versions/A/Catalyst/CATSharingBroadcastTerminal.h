@class CATOperationQueue;
@protocol CATSharingBroadcastPrimitives, CATSharingBroadcastTerminalDelegate;

@interface CATSharingBroadcastTerminal : NSObject {
    id<CATSharingBroadcastPrimitives> mBroadcastPrimitive;
    id<CATSharingBroadcastTerminalDelegate> mDelegate;
    CATOperationQueue *mDelegationQueue;
    char mInvalidated;
    char mIsDisplayingPIN;
}

@property (nonatomic, getter=isBroadcasting) char broadcasting;
@property (readonly, nonatomic) CATOperationQueue *delegationQueue;

- (void)_activate;
- (void).cxx_destruct;
- (void)invalidate;
- (void)activate;
- (void)_invalidateWithError:(id)a0 removePrimitiveHandlers:(char)a1 deactivatePrimitives:(char)a2;
- (void)addPrimitiveHandlers;
- (id)initWithBroadcastPrimitives:(id)a0 delegate:(id)a1 delegationQueue:(id)a2;
- (void)removePrimitiveHandlers;
- (void)sessionHasPaired;
- (void)sessionNeedsToDisplayPin:(id)a0;

@end
