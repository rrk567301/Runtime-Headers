@class CLSCurrentUser;

@interface CLSSettingsVisibilityController : NSObject {
    CLSCurrentUser *_currentUser;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

+ (id)shared;

- (void)dealloc;
- (id)init;
- (void)lock;
- (void).cxx_destruct;
- (void)unlock;
- (id)currentUser;
- (void)currentUserDidChange:(id)a0;
- (id)cachedCurrentUserAppleID;
- (BOOL)settingsUIVisible;

@end
