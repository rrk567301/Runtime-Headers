@interface FlashPod : DiskPod {
    BOOL _recoveryMode;
}

- (void)restoreFirmware:(id)a0;
- (void)updateFirmware:(id)a0;
- (BOOL)needToDisconnectAfterUpdate;
- (BOOL)mountedEnoughForUpdate;
- (int)diskFormat;
- (BOOL)supportsMultipleDiskFormats;
- (unsigned int)updaterFamilyID;
- (unsigned int)podFamilyID;
- (BOOL)isInRecoveryMode;
- (id)initWithUpdaterID:(unsigned int)a0 familyID:(unsigned int)a1;
- (void)setRecoveryModeService:(unsigned int)a0;
- (BOOL)ensureDiskEntry;

@end
