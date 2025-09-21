@interface VCMediaNegotiatorResultsFaceTimeSettings : NSObject {
    unsigned char mediaControlInfoFECFeedbackVersion;
}

@property (nonatomic) char SIPDisabled;
@property (nonatomic) char secureMessagingRequired;
@property (nonatomic) char remoteFaceTimeSwitchesAvailable;
@property (nonatomic) unsigned int faceTimeSwitches;
@property (nonatomic) char oneToOneModeSupported;
@property (nonatomic) unsigned char mediaControlInfoFECFeedbackVersion;
@property (nonatomic) unsigned char remoteLinkProbingCapabilityVersion;

@end
