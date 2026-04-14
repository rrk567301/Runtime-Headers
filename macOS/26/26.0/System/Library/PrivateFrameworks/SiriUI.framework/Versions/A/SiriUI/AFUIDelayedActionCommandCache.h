@class NSMutableDictionary;
@protocol AFUIDelayedActionCommandCacheDelegate;

@interface AFUIDelayedActionCommandCache : NSObject {
    NSMutableDictionary *_delayedActionTimersByIdentifier;
    NSMutableDictionary *_dismissalDelayedActionCommandsByIdentifier;
}

@property (weak, nonatomic) id<AFUIDelayedActionCommandCacheDelegate> delegate;
@property (readonly, nonatomic) BOOL hasPendingCommands;

- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)_invalidateDelayedActionTimer:(id)a0 withKey:(id)a1;
- (void)_performDelayedActionCommandTimerAction:(id)a0;
- (void)handleDelayedActionCancelCommand:(id)a0;
- (void)handleDelayedActionCommand:(id)a0;
- (void)invalidatePendingCommands;
- (void)performDismissalCommands;

@end
