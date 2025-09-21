@class NSData, NSString, NSDate, NSArray, HMInfo, NSMutableDictionary, HMDeviceCloudRecordInfo, NSNumber, AudioAccessoryDevice;

@interface HMDeviceRecord : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) AudioAccessoryDevice *aaDevice;
@property (copy, nonatomic) HMDeviceCloudRecordInfo *cloudRecord;
@property (nonatomic) BOOL cloudRecordLoaded;
@property (copy) NSData *configDataPME;
@property (nonatomic) unsigned int currentNoiseLevel;
@property (copy) NSData *configDataHearingAid;
@property (copy) NSData *earLossDataLeft;
@property (copy) NSData *earLossDataRight;
@property (nonatomic) unsigned char hearingAidV2RegionStatus;
@property (nonatomic) unsigned char hearingAssistRegionStatus;
@property (nonatomic) int hearingProtectionOcclusionResult;
@property (nonatomic) unsigned char hearingProtectionRegionStatus;
@property (nonatomic) unsigned char hearingProtectionPPERegionStatus;
@property (nonatomic) int hearingTestOcclusionResult;
@property (nonatomic) unsigned char hearingTestRegionStatus;
@property (nonatomic) char mediaAssistEnabled;
@property (nonatomic) BOOL occlusionResultReady;
@property (retain) NSMutableDictionary *pendingOcclusionCompletionsMap;
@property (copy) NSData *pmeMediaLossDataLeft;
@property (copy) NSData *pmeMediaLossDataRight;
@property (copy) NSData *pmeVoiceLossDataLeft;
@property (copy) NSData *pmeVoiceLossDataRight;
@property (nonatomic) BOOL sharedRegionStatus;
@property (nonatomic) unsigned char version;
@property (readonly, nonatomic) NSNumber *amplification;
@property (readonly, nonatomic) NSDate *audiogramEnrolledTimestamp;
@property (readonly, nonatomic) NSNumber *balance;
@property (readonly, nonatomic) NSNumber *beamFormer;
@property (readonly, copy, nonatomic) NSString *bluetoothAddress;
@property (readonly, copy, nonatomic) NSData *bluetoothAddressData;
@property (readonly, copy, nonatomic) NSString *bluetoothUUID;
@property (readonly, copy) NSArray *earLossArrayLeft;
@property (readonly, copy) NSArray *earLossArrayRight;
@property (readonly, nonatomic) char hearingAidEnabled;
@property (readonly, nonatomic) char hearingAidV2Capability;
@property (readonly, nonatomic) char hearingAssistCapability;
@property (readonly, nonatomic) char hearingAssistEnabled;
@property (readonly, nonatomic) char hearingAssistEnrolled;
@property (readonly, nonatomic) char hearingProtectionCapability;
@property (readonly, nonatomic) char hearingProtectionEnabled;
@property (readonly, nonatomic) char hearingProtectionPPECapability;
@property (readonly, nonatomic) NSNumber *hearingProtectionPPECapLevel;
@property (readonly, nonatomic) char hearingProtectionPPEEnabled;
@property (readonly, nonatomic) char hearingTestCapability;
@property (readonly, nonatomic) char listeningModeOffAllowed;
@property (readonly, nonatomic) char hideOffModeCapability;
@property (readonly, nonatomic) NSNumber *noiseSuppression;
@property (readonly, nonatomic) NSNumber *ownVoiceLevelGain;
@property (readonly, nonatomic) char pmeMediaEnabled;
@property (readonly, copy) NSArray *pmeMediaLossPresetsLeft;
@property (readonly, copy) NSArray *pmeMediaLossPresetsRight;
@property (readonly, copy) NSArray *pmeVoiceLossPresetsLeft;
@property (readonly, copy) NSArray *pmeVoiceLossPresetsRight;
@property (readonly, nonatomic) char pmeVoiceEnabled;
@property (readonly, nonatomic) char pmeVoiceEnrolled;
@property (readonly, nonatomic) char swipeGainEnabled;
@property (readonly, nonatomic) NSNumber *tone;
@property (readonly, nonatomic) HMInfo *safetyInformation;

+ (char)getHMMultiStateFromPMEState:(unsigned char)a0;
+ (char)multiStateForAAFeatureCapability:(unsigned char)a0;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)descriptionWithLevel:(int)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)_deriveMediaAssistStateIfNeeded;
- (int)getOcclusionResultForFeatureID:(int)a0;
- (BOOL)updateWithHearingAidConfigData:(id)a0;
- (void)getSafetyInformation:(unsigned int)a0;
- (void)invokePendingOcclusionCompletionsWithError:(id)a0;
- (BOOL)setOcclusionResult:(int)a0 forFeatureID:(int)a1;
- (BOOL)updateWithAADevice:(id)a0;
- (BOOL)updateWithCloudRecordInfo:(id)a0;
- (BOOL)updateWithHearingProtectionValue:(unsigned char)a0;
- (BOOL)updateWithPMEConfigData:(id)a0;

@end
