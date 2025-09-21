@class NSString, NSDictionary;

@interface TLCapabilitiesManager : NSObject {
    char _isInternalInstall;
    NSDictionary *_deviceCodeNameSimplicationMapping;
}

@property (class, readonly) TLCapabilitiesManager *sharedCapabilitiesManager;

@property (readonly, nonatomic, getter=isRingtoneStoreAvailable) char ringtoneStoreAvailable;
@property (readonly, nonatomic, getter=isAlertToneStoreAvailable) char alertToneStoreAvailable;
@property (readonly, nonatomic) char wantsModernDefaultRingtone;
@property (readonly, nonatomic) char hasVibratorCapability;
@property (readonly, nonatomic) char hasUserGeneratedVibrationsCapability;
@property (readonly, nonatomic) char hasCellularTelephonyCapability;
@property (readonly, nonatomic) char hasFaceIDCapability;
@property (readonly, nonatomic, getter=isInternalInstall) char internalInstall;
@property (readonly, nonatomic) NSString *deviceCodeName;
@property (readonly, nonatomic) NSString *simplifiedDeviceCodeName;
@property (readonly, nonatomic, getter=isHomePod) char homePod;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
