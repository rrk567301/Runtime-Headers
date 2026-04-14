@class NSURL;

@interface AXSettingsProfileManager : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _containerURLLock;
}

@property (retain, nonatomic) NSURL *containerURL;
@property (readonly, nonatomic) NSURL *guestPassLocalStorageURL;

- (id)init;
- (void).cxx_destruct;
- (id)_getAXFileURLForPersona:(id)a0;
- (void)createPreferencesStorageFileIfNeededAtPath:(id)a0;
- (void)deleteAllGuestPassProfiles;
- (void)deleteGuestPassProfile:(id)a0;
- (void)endGuestModeSession;
- (BOOL)handleGuest;
- (BOOL)handleUserProfileDidChangeToUser:(id)a0;
- (BOOL)handleUserProfileWillChangeFromUser:(id)a0;
- (BOOL)startGuestModeSessionWithData:(id)a0;
- (void)storeGuestPassProfile:(id)a0 name:(id)a1;
- (BOOL)updateProfileFor:(id)a0 withProperties:(id)a1;

@end
