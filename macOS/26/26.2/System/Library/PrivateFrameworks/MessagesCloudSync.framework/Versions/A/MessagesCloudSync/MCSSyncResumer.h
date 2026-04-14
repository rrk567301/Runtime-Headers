@interface MCSSyncResumer : NSObject <IMUnlockMonitorListener> {
    void /* unknown type, empty encoding */ initialRestartDateKey;
    void /* unknown type, empty encoding */ minTimeBetweenInitialRestarts;
    void /* unknown type, empty encoding */ backfillRestartDateKey;
    void /* unknown type, empty encoding */ minTimeBetweenBackfillRestarts;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ syncStateManager;
}

- (void)systemDidLeaveFirstDataProtectionLock;
- (void)systemDidUnlock;
- (void).cxx_destruct;
- (id)init;
- (void)attemptToResumeSyncIfAppropriate;
- (void)attemptToResumeSyncOnAccountUpdateIfAppropriate;
- (void)attemptToResumeSyncOnIdentityUpdateIfAppropriate;
- (id)initWithDelegate:(id)a0 syncStateManager:(id)a1;
- (void)resumeSyncUsingKey:(id)a0;

@end
