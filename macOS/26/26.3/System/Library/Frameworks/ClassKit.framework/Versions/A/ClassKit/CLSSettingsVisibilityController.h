@class CLSCurrentUser;

@interface CLSSettingsVisibilityController : NSObject {
    CLSCurrentUser *_currentUser;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

+ (id)shared;

- (id)init;
- (void)unlock;
- (void)currentUserDidChange:(id)a0;
- (void).cxx_destruct;
- (BOOL)settingsUIVisible;
- (void)lock;
- (void)dealloc;
- (id)cachedCurrentUserAppleID;
- (id)currentUser;

@end
