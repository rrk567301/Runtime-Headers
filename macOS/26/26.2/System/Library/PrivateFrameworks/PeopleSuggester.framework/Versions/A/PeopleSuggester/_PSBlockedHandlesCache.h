@interface _PSBlockedHandlesCache : NSObject {
    id /* block */ _isHandleBlocked;
}

+ (id)sharedBlockedHandlesCache;

- (void).cxx_destruct;
- (id)init;
- (BOOL)isHandleBlocked:(id)a0;
- (void)rebuildCacheWithBlockedHandles:(id)a0;
- (void)beginSyncingWithTU;
- (void)handlePrivacyManagerChangeNotification:(id)a0;
- (void)rebuildCacheFromPrivacyManager;

@end
