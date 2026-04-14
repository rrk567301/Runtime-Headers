@class NSNumber;
@protocol CDPLocalDeviceSecretProxy;

@interface CDPLocalDevice : NSObject {
    id<CDPLocalDeviceSecretProxy> _localSecretProxy;
}

@property (readonly, nonatomic) NSNumber *localSecretGeneration;

+ (id)sharedInstance;
+ (BOOL)hasLocalSecret;

- (id)modelVersion;
- (id)deviceClass;
- (id)deviceName;
- (id)hardwareModel;
- (id)serialNumber;
- (id)osVersion;
- (id)init;
- (BOOL)_isHomePod;
- (void).cxx_destruct;
- (BOOL)_currentProcessCreatesDaemonTypeProxy;
- (int)currentLockState;
- (BOOL)currentProcessHasEntitlement:(id)a0;
- (BOOL)hasLocalSecret;
- (id)marketingModel;
- (BOOL)supportsSecureBackupRecovery;

@end
