@class _PASLock;

@interface ATXLockscreenBlacklist : NSObject {
    _PASLock *_lock;
    id _notificationCenterToken;
    int _libnotifyToken;
}

+ (id)sharedInstance;
+ (id)appsLockedOrHiddenByAppProtection;

- (BOOL)isPredictionGloballyDisabled;
- (id)blacklist;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
