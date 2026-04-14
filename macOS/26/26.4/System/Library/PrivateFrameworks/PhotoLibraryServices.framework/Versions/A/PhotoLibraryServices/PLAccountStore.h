@class ACAccount, NSObject;
@protocol OS_dispatch_queue;

@interface PLAccountStore : ACAccountStore {
    NSObject<OS_dispatch_queue> *_queue;
    ACAccount *_cachedPrimaryAppleAccount;
}

@property (readonly, weak) ACAccount *cachedPrimaryAppleAccount;

+ (id)pl_sharedAccountStore;

- (void)clearCachedProperties;
- (void).cxx_destruct;
- (void)accountDidChange:(id)a0;
- (id)init;
- (void)dealloc;

@end
