@class NSNumber;
@protocol CDPLocalDeviceSecretProxy;

@interface CDPLocalDevice : NSObject {
    id<CDPLocalDeviceSecretProxy> _localSecretProxy;
}

@property (readonly, nonatomic) NSNumber *localSecretGeneration;

+ (id)sharedInstance;
+ (BOOL)hasLocalSecret;

- (id)hardwareModel;
- (id)modelVersion;
- (id)deviceClass;
- (id)osVersion;
- (id)serialNumber;
- (void).cxx_destruct;
- (id)deviceName;
- (id)init;
- (BOOL)_isHomePod;
- (BOOL)_currentProcessCreatesDaemonTypeProxy;
- (int)currentLockState;
- (BOOL)currentProcessHasEntitlement:(id)a0;
- (BOOL)hasLocalSecret;
- (id)marketingModel;
- (BOOL)supportsSecureBackupRecovery;

@end
