@class NSData, NSArray;

@interface HMDeviceConfigurations : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSData *mediaLossDataLeft;
@property (copy) NSData *mediaLossDataRight;
@property (copy) NSData *voiceLossDataLeft;
@property (copy) NSData *voiceLossDataRight;
@property (nonatomic) char allowListeningModeOff;
@property (nonatomic) char enablePMEMedia;
@property (nonatomic) char enablePMEVoice;
@property (nonatomic) char enrollPMEVoice;
@property (copy) NSArray *mediaLossArrayLeft;
@property (copy) NSArray *mediaLossArrayRight;
@property (copy) NSArray *voiceLossArrayLeft;
@property (copy) NSArray *voiceLossArrayRight;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionWithLevel:(int)a0;
- (BOOL)needsUpdateToDeviceManagerForDevice:(id)a0;
- (BOOL)needsUpdateToPMEConfigurationForDevice:(id)a0;
- (BOOL)needsUpdateToPersonalAudioForDevice:(id)a0;
- (BOOL)restoreConfigsFromCloudRecordIfNeeded:(id)a0;

@end
