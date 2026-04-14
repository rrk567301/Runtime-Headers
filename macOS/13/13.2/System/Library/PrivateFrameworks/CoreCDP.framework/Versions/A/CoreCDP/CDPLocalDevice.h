@protocol CDPLocalDeviceSecretProxy;

@interface CDPLocalDevice : NSObject {
    id<CDPLocalDeviceSecretProxy> _localSecretProxy;
}

+ (id)sharedInstance;
+ (BOOL)hasLocalSecret;

- (id)init;
- (void).cxx_destruct;
- (id)serialNumber;
- (id)deviceName;
- (id)deviceClass;
- (id)modelVersion;
- (id)osVersion;
- (id)hardwareModel;
- (BOOL)hasLocalSecret;
- (BOOL)supportsSecureBackupRecovery;
- (id)marketingModel;
- (BOOL)_currentProcessCreatesDaemonTypeProxy;
- (BOOL)currentProcessHasEntitlement:(id)a0;
- (BOOL)_isHomePod;

@end
