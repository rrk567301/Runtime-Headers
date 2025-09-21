@class CLSCurrentUser;

@interface CLSSettingsVisibilityController : NSObject {
    CLSCurrentUser *_currentUser;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

+ (id)shared;

- (void)unlock;
- (void)dealloc;
- (BOOL)settingsUIVisible;
- (void)lock;
- (id)init;
- (id)currentUser;
- (void)currentUserDidChange:(id)a0;
- (id)cachedCurrentUserAppleID;
- (void).cxx_destruct;

@end
