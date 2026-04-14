@class CLSCurrentUser;

@interface CLSSettingsVisibilityController : NSObject {
    CLSCurrentUser *_currentUser;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

+ (id)shared;

- (void)unlock;
- (id)currentUser;
- (void)lock;
- (BOOL)settingsUIVisible;
- (void)dealloc;
- (void).cxx_destruct;
- (id)cachedCurrentUserAppleID;
- (void)currentUserDidChange:(id)a0;
- (id)init;

@end
