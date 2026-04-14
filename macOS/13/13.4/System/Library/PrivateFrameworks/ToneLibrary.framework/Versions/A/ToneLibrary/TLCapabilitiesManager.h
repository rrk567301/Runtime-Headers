@class NSString, NSDictionary;

@interface TLCapabilitiesManager : NSObject {
    NSDictionary *_deviceCodeNameSimplicationMapping;
}

@property (class, readonly) TLCapabilitiesManager *sharedCapabilitiesManager;

@property (readonly, nonatomic, getter=isRingtoneStoreAvailable) BOOL ringtoneStoreAvailable;
@property (readonly, nonatomic, getter=isAlertToneStoreAvailable) BOOL alertToneStoreAvailable;
@property (readonly, nonatomic) BOOL hasVibratorCapability;
@property (readonly, nonatomic) BOOL hasUserGeneratedVibrationsCapability;
@property (readonly, nonatomic) NSString *deviceCodeName;
@property (readonly, nonatomic) NSString *simplifiedDeviceCodeName;
@property (readonly, nonatomic, getter=isHomePod) BOOL homePod;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
