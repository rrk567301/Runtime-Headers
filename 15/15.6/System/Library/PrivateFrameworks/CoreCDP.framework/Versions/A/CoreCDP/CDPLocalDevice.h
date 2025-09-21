@class NSNumber;
@protocol CDPLocalDeviceSecretProxy;

@interface CDPLocalDevice : NSObject {
    id<CDPLocalDeviceSecretProxy> _localSecretProxy;
}

@property (readonly, nonatomic) NSNumber *localSecretGeneration;

+ (id)sharedInstance;
+ (char)hasLocalSecret;

- (id)init;
- (void).cxx_destruct;
- (id)serialNumber;
- (id)deviceName;
- (id)deviceClass;
- (id)modelVersion;
- (id)osVersion;
- (id)hardwareModel;
- (char)_currentProcessCreatesDaemonTypeProxy;
- (char)_isHomePod;
- (char)currentProcessHasEntitlement:(id)a0;
- (char)hasLocalSecret;
- (id)marketingModel;
- (char)supportsSecureBackupRecovery;

@end
