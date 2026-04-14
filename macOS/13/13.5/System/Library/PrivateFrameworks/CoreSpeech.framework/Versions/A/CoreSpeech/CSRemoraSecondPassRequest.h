@class CSAudioStreamHolding, NSString, CSVoiceTriggerSecondPass, CSAudioProvider, CSAsset, CSVoiceTriggerSecondChanceContext;

@interface CSRemoraSecondPassRequest : NSObject

@property (retain, nonatomic) NSString *firstPassDeviceID;
@property (retain, nonatomic) CSVoiceTriggerSecondPass *voiceTriggerSecondPass;
@property (nonatomic) BOOL isSecondPassRunning;
@property (retain, nonatomic) CSAudioStreamHolding *audioStreamHolding;
@property (retain, nonatomic) CSAudioProvider *audioProvider;
@property (retain, nonatomic) CSAsset *currentAsset;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL isCancelled;
@property (nonatomic) float goodnessScore;
@property (nonatomic) double firstPassTriggerEndTime;
@property (retain, nonatomic) CSVoiceTriggerSecondChanceContext *secondChanceContext;

- (void)dealloc;
- (void).cxx_destruct;
- (void)start;
- (void)reset;
- (void)cancelRequest;
- (void)setAsset:(id)a0;
- (id)initWithDeviceID:(id)a0;
- (id)_secondPassStateQueue;
- (id)_secondPassWorkQueue;
- (void)cancelAudioStreamHold;
- (void)holdAudioStreamWithTimeout:(double)a0;

@end
