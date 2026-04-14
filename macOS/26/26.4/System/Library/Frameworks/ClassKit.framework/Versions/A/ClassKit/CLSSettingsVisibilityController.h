@class CLSCurrentUser;

@interface CLSSettingsVisibilityController : NSObject {
    CLSCurrentUser *_currentUser;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

+ (id)shared;

- (id)currentUser;
- (id)cachedCurrentUserAppleID;
- (void)unlock;
- (void)currentUserDidChange:(id)a0;
- (void).cxx_destruct;
- (BOOL)settingsUIVisible;
- (id)init;
- (void)lock;
- (void)dealloc;

@end
