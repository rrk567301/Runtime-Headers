@class CLSCurrentUser;

@interface CLSSettingsVisibilityController : NSObject {
    CLSCurrentUser *_currentUser;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

+ (id)shared;

- (void)unlock;
- (id)currentUser;
- (void)currentUserDidChange:(id)a0;
- (void).cxx_destruct;
- (BOOL)settingsUIVisible;
- (void)lock;
- (id)cachedCurrentUserAppleID;
- (id)init;
- (void)dealloc;

@end
