@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface TLContentProtectionStateObserver : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSString *_accessQueueLabel;
    NSMutableDictionary *_blocksScheduledForProtectedContentUnlockedEvent;
    long long _contentProtectionStatus;
    long long _unlockedSinceBootStatus;
}

@property (class, readonly) TLContentProtectionStateObserver *sharedContentProtectionStateObserver;

- (void)cancelBlockScheduledForProtectedContentUnlockedEventWithToken:(id)a0;
- (id)performBlockAfterProtectedContentUnlocked:(id /* block */)a0;
- (void)_loadUnlockedSinceBootStatusIfNeeded;
- (void)_cancelBlockScheduledForProtectedContentUnlockedEventWithToken:(id)a0;
- (void).cxx_destruct;
- (void)_assertRunningOnAccessQueue;
- (long long)_queryCurrentUnlockedSinceBootStatus;
- (void)_assertNotRunningOnAccessQueue;
- (void)_loadContentProtectionStatusIfNeeded;
- (id)init;
- (id)_performBlockAfterProtectedContentUnlocked:(id /* block */)a0;
- (void)dealloc;

@end
