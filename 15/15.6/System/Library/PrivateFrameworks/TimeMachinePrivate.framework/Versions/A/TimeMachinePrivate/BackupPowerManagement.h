@class NSNumber;

@interface BackupPowerManagement : NSObject

@property (retain) NSNumber *batteryPercentRemainingHighWaterMark;
@property (readonly) char hasUnlimitedPower;
@property (readonly) NSNumber *batteryPercentRemaining;
@property (readonly) int powerState;

+ (id)backupPowerManager;

- (void).cxx_destruct;
- (char)shouldContinueBackupInMode:(unsigned long long)a0 allowBackUpOnBattery:(char)a1 error:(id *)a2;
- (char)shouldStartBackupInMode:(unsigned long long)a0 allowBackUpOnBattery:(char)a1 error:(id *)a2;

@end
