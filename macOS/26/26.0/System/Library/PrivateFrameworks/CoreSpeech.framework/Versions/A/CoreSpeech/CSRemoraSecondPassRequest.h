@class CSAudioStreamHolding, NSString, CSVoiceTriggerSecondPass, CSAudioProvider, CSAsset, CSVoiceTriggerSecondChanceContext, CSVoiceTriggerUserSelectedPhrase;

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
@property (retain, nonatomic) CSVoiceTriggerUserSelectedPhrase *multiPhraseSelectedStatus;

- (id)initWithDeviceID:(id)a0;
- (void)reset;
- (void)start;
- (void)dealloc;
- (void)cancelRequest;
- (void)setAsset:(id)a0;
- (void).cxx_destruct;
- (id)_secondPassWorkQueue;
- (void)cancelAudioStreamHold;
- (void)holdAudioStreamWithTimeout:(double)a0;

@end
