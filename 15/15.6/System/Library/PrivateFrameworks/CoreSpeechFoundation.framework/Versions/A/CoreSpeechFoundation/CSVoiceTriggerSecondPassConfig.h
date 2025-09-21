@class NSString, NSArray, CSVoiceTriggerAirPodWearerDetectionConfig, NSNumber;

@interface CSVoiceTriggerSecondPassConfig : NSObject

@property (readonly, nonatomic) float preTriggerAudioTime;
@property (readonly, nonatomic) float prependingAudioTime;
@property (readonly, nonatomic) float trailingAudioTime;
@property (readonly, nonatomic) NSString *resourcePath;
@property (readonly, nonatomic) NSString *configPathNDAPI;
@property (readonly, nonatomic) char useRecognizerCombination;
@property (readonly, nonatomic) NSString *configPathRecognizer;
@property (readonly, nonatomic) char useKeywordSpotting;
@property (readonly, nonatomic) NSArray *phraseConfigs;
@property (readonly, nonatomic) CSVoiceTriggerAirPodWearerDetectionConfig *wearerDetectionConfig;
@property (readonly, nonatomic) NSNumber *quasarCheckerResultCutOffCount;
@property (readonly, nonatomic) char useTimeBasedTriggerLength;

- (void).cxx_destruct;
- (id)initWithPreTriggerAudioTime:(float)a0 prependingAudioTime:(float)a1 trailingAudioTime:(float)a2 resourcePath:(id)a3 configPathNDAPI:(id)a4 useRecognizerCombination:(char)a5 configPathRecognizer:(id)a6 useKeywordSpotting:(char)a7 phraseConfigs:(id)a8 wearerDetectionConfig:(id)a9 quasarCheckerResultCutOffCount:(id)a10 useTimeBasedTriggerLength:(char)a11;

@end
