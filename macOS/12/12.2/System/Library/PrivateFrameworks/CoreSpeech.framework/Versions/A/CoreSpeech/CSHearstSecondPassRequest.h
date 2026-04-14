@class CSAudioStreamHolding, NSString, CSVoiceTriggerSecondPass, CSAudioProvider;

@interface CSHearstSecondPassRequest : NSObject

@property (retain, nonatomic) NSString *firstPassDeviceID;
@property (retain, nonatomic) CSVoiceTriggerSecondPass *voiceTriggerSecondPass;
@property (nonatomic) BOOL isSecondPassRunning;
@property (nonatomic) float remoteMicVADScore;
@property (retain, nonatomic) CSAudioStreamHolding *audioStreamHolding;
@property (retain, nonatomic) CSAudioProvider *audioProvider;

- (void)dealloc;
- (void).cxx_destruct;
- (void)start;
- (void)reset;
- (void)setAsset:(id)a0;
- (id)initWithDeviceID:(id)a0;
- (void)cancelAudioStreamHold;
- (void)holdAudioStreamWithTimeout:(double)a0;

@end
