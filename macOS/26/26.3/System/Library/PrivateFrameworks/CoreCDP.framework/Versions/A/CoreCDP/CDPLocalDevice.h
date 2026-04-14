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
- (id)modelVersion;
- (id)serialNumber;
- (id)deviceName;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_isHomePod;
- (BOOL)_currentProcessCreatesDaemonTypeProxy;
- (int)currentLockState;
- (BOOL)currentProcessHasEntitlement:(id)a0;
- (BOOL)hasLocalSecret;
- (id)marketingModel;
- (BOOL)supportsSecureBackupRecovery;

@end
