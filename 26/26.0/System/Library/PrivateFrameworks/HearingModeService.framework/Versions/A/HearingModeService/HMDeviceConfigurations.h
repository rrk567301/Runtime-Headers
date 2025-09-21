@class NSArray, NSData, HKAudiogramSample, NSNumber;

@interface HMDeviceConfigurations : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSData *mediaLossDataLeft;
@property (copy) NSData *mediaLossDataRight;
@property (copy) NSData *voiceLossDataLeft;
@property (copy) NSData *voiceLossDataRight;
@property (nonatomic) char allowListeningModeOff;
@property (retain, nonatomic) NSNumber *amplification;
@property (retain, nonatomic) NSNumber *balance;
@property (retain, nonatomic) NSNumber *beamFormer;
@property (nonatomic) char enableHearingAid;
@property (nonatomic) char enableHearingAssist;
@property (nonatomic) char enableHearingProtection;
@property (nonatomic) char enableHearingProtectionPPE;
@property (nonatomic) char enableMediaAssist;
@property (nonatomic) char enablePMEMedia;
@property (nonatomic) char enablePMEVoice;
@property (nonatomic) char enableSwipeGain;
@property (nonatomic) char enrollHearingAssist;
@property (nonatomic) char enrollPMEVoice;
@property (copy) NSArray *mediaLossArrayLeft;
@property (copy) NSArray *mediaLossArrayRight;
@property (retain, nonatomic) NSNumber *noiseSuppression;
@property (retain, nonatomic) NSNumber *ownVoiceLevelGain;
@property (retain, nonatomic) HKAudiogramSample *selectedAudiogram;
@property (copy) NSArray *voiceLossArrayLeft;
@property (copy) NSArray *voiceLossArrayRight;
@property (retain, nonatomic) NSNumber *tone;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)descriptionWithLevel:(int)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)setEnableHearingAssistIfNeeded:(id)a0;
- (BOOL)needsUpdateToAHPSConnectionManagerForDevice:(id)a0;
- (BOOL)needsUpdateToDeviceManagerForDevice:(id)a0;
- (BOOL)needsUpdateToPMEConfigurationForDevice:(id)a0;
- (BOOL)needsUpdateToPersonalAudioForDevice:(id)a0;
- (BOOL)restoreConfigsFromCloudRecordIfNeeded:(id)a0;
- (void)setupConfigsForPPEIfNeeded:(id)a0 completion:(id /* block */)a1;
- (void)updateVolumeMacOS:(id)a0 completion:(id /* block */)a1;

@end
