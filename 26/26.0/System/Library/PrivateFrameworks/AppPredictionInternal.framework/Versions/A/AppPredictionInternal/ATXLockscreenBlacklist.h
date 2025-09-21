@class _PASLock;

@interface ATXLockscreenBlacklist : NSObject {
    _PASLock *_lock;
    id _notificationCenterToken;
    int _libnotifyToken;
}

+ (id)sharedInstance;
+ (id)appsLockedOrHiddenByAppProtection;

- (BOOL)isPredictionGloballyDisabled;
- (void)dealloc;
- (id)init;
- (id)blacklist;
- (void).cxx_destruct;

@end
