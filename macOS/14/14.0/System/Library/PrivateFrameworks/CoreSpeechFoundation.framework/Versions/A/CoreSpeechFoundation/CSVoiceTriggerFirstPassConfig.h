@class NSString;

@interface CSVoiceTriggerFirstPassConfig : NSObject

@property (readonly, nonatomic) NSString *configPathNDAPI;
@property (readonly, nonatomic) float threshold;
@property (readonly, nonatomic) float delaySecondsForChannelSelection;
@property (readonly, nonatomic) float masterChannelScoreBoost;
@property (readonly, nonatomic) float processingChunkSeconds;
@property (readonly, nonatomic) unsigned long long processingChannelsBitset;

- (void).cxx_destruct;
- (id)initWithConfigPathNDAPI:(id)a0 threshold:(float)a1 delaySecondsForChannelSelection:(float)a2 masterChannelScoreBoost:(float)a3 processingChunkSeconds:(float)a4 processingChannelsBitset:(unsigned long long)a5;

@end
