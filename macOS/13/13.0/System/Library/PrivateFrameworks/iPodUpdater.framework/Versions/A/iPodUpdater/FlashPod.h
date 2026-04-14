@interface FlashPod : DiskPod {
    BOOL _recoveryMode;
}

- (BOOL)mountedEnoughForUpdate;
- (int)diskFormat;
- (BOOL)supportsMultipleDiskFormats;
- (BOOL)needToDisconnectAfterUpdate;
- (void)updateFirmware:(id)a0;
- (void)restoreFirmware:(id)a0;
- (unsigned int)updaterFamilyID;
- (unsigned int)podFamilyID;
- (BOOL)isInRecoveryMode;
- (id)initWithUpdaterID:(unsigned int)a0 familyID:(unsigned int)a1;
- (void)setRecoveryModeService:(unsigned int)a0;
- (BOOL)ensureDiskEntry;

@end
