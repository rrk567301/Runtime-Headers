@class NSNumber;
@protocol CDPLocalDeviceSecretProxy;

@interface CDPLocalDevice : NSObject {
    id<CDPLocalDeviceSecretProxy> _localSecretProxy;
}

@property (readonly, nonatomic) NSNumber *localSecretGeneration;

+ (id)sharedInstance;
+ (BOOL)hasLocalSecret;

- (id)osVersion;
- (id)deviceClass;
- (id)hardwareModel;
- (id)deviceName;
- (id)serialNumber;
- (BOOL)_isHomePod;
- (id)modelVersion;
- (void).cxx_destruct;
- (id)init;
- (BOOL)_currentProcessCreatesDaemonTypeProxy;
- (int)currentLockState;
- (BOOL)currentProcessHasEntitlement:(id)a0;
- (BOOL)hasLocalSecret;
- (id)marketingModel;
- (BOOL)supportsSecureBackupRecovery;

@end
