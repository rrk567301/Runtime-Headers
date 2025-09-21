@interface FlashPod : DiskPod {
    char _recoveryMode;
}

- (void)updateFirmware:(id)a0;
- (char)ensureDiskEntry;
- (unsigned int)updaterFamilyID;
- (int)diskFormat;
- (id)initWithUpdaterID:(unsigned int)a0 familyID:(unsigned int)a1;
- (char)isInRecoveryMode;
- (char)mountedEnoughForUpdate;
- (char)needToDisconnectAfterUpdate;
- (unsigned int)podFamilyID;
- (void)restoreFirmware:(id)a0;
- (void)setRecoveryModeService:(unsigned int)a0;
- (char)supportsMultipleDiskFormats;

@end
