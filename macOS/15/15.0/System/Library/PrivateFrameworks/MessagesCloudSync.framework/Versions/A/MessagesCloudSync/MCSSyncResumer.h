@interface MCSSyncResumer : NSObject <IMUnlockMonitorListener> {
    void /* unknown type, empty encoding */ delegate;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)systemDidUnlock;
- (void)systemDidLeaveFirstDataProtectionLock;
- (void)attemptToResumeSyncIfAppropriate;
- (void)attemptToResumeSyncOnAccountUpdateIfAppropriate;
- (void)attemptToResumeSyncOnIdentityUpdateIfAppropriate;
- (void)resumeSyncUsingKey:(id)a0;

@end
