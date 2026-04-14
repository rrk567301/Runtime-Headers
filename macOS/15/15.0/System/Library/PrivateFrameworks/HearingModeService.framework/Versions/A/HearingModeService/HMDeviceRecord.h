@class AudioAccessoryDevice, NSString, NSData, NSArray, HMDeviceCloudRecordInfo;

@interface HMDeviceRecord : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) AudioAccessoryDevice *aaDevice;
@property (copy, nonatomic) HMDeviceCloudRecordInfo *cloudRecord;
@property (copy) NSData *configDataPME;
@property (copy) NSData *pmeMediaLossDataLeft;
@property (copy) NSData *pmeMediaLossDataRight;
@property (copy) NSData *pmeVoiceLossDataLeft;
@property (copy) NSData *pmeVoiceLossDataRight;
@property (readonly, copy, nonatomic) NSString *bluetoothAddress;
@property (readonly, copy, nonatomic) NSData *bluetoothAddressData;
@property (readonly, copy, nonatomic) NSString *bluetoothUUID;
@property (readonly, nonatomic) char listeningModeOffAllowed;
@property (readonly, nonatomic) char pmeMediaEnabled;
@property (readonly, copy) NSArray *pmeMediaLossPresetsLeft;
@property (readonly, copy) NSArray *pmeMediaLossPresetsRight;
@property (readonly, copy) NSArray *pmeVoiceLossPresetsLeft;
@property (readonly, copy) NSArray *pmeVoiceLossPresetsRight;
@property (readonly, nonatomic) char pmeVoiceEnabled;
@property (readonly, nonatomic) char pmeVoiceEnrolled;

+ (char)getHMMultiStateFromPMEState:(unsigned char)a0;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionWithLevel:(int)a0;
- (BOOL)updateWithAADevice:(id)a0;
- (BOOL)updateWithPMEConfigData:(id)a0;

@end
