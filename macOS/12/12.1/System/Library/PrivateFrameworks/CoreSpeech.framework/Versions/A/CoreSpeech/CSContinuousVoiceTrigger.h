@class CSKeywordAnalyzerNDAPI, CSAsset, CSAudioTimeConverter, NSString, NSObject, CSAudioRecordContext;
@protocol OS_dispatch_queue, CSContinuousVoiceTriggerDelegate;

@interface CSContinuousVoiceTrigger : NSObject <CSKeywordAnalyzerNDAPIScoreDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) CSAsset *currentAsset;
@property (retain, nonatomic) CSKeywordAnalyzerNDAPI *keywordAnalyzer;
@property (nonatomic) float keywordThreshold;
@property (nonatomic) long long mode;
@property (nonatomic) unsigned long long analyzedSampleCount;
@property (nonatomic) unsigned long long triggerEndSampleCount;
@property (nonatomic) unsigned long long twoShotDecisionWaitSamples;
@property (nonatomic) float twoShotThreshold;
@property (nonatomic) unsigned long long activeChannel;
@property (nonatomic) float lastScore;
@property (retain, nonatomic) CSAudioRecordContext *audioRecordContext;
@property (weak, nonatomic) id<CSContinuousVoiceTriggerDelegate> delegate;
@property (retain, nonatomic) CSAudioTimeConverter *audioTimeConverter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)_reset;
- (void)setAsset:(id)a0;
- (void)_setAsset:(id)a0;
- (void)_shotAnalyzerNDAPI:(id)a0 hasResultAvailable:(id)a1 forChannel:(unsigned long long)a2;
- (void)_keywordAnalyzerNDAPI:(id)a0 hasResultAvailable:(id)a1 forChannel:(unsigned long long)a2;
- (void)keywordAnalyzerNDAPI:(id)a0 hasResultAvailable:(id)a1 forChannel:(unsigned long long)a2;
- (void)resetWithAudioRecordContext:(id)a0;
- (void)startDetectTwoShot:(id)a0;
- (void)processAudioSamples:(id)a0;

@end
