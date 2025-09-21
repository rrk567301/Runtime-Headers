@class SSRLoggingAggregator, NSArray, SSRVoiceProfile, NSURL, NSString, NSDictionary, CSAsset;

@interface SSRVoiceProfileRetrainingContext : NSObject

@property (retain, nonatomic) NSArray *compareVoiceProfileArray;
@property (retain, nonatomic) SSRVoiceProfile *voiceProfile;
@property (readonly, nonatomic) unsigned long long spIdType;
@property (readonly, nonatomic) NSURL *resourceFilePath;
@property (readonly, nonatomic) NSString *configVersion;
@property (readonly, nonatomic) char filterToVoiceTriggerUtterances;
@property (readonly, nonatomic) char forceRetrain;
@property (readonly, nonatomic) unsigned long long maxAllowedSpeakerVectors;
@property (readonly, nonatomic) NSDictionary *modelsContext;
@property (readonly, nonatomic) float combinationWeight;
@property (retain, nonatomic) CSAsset *asset;
@property (retain, nonatomic) SSRLoggingAggregator *logAggregator;
@property (readonly, nonatomic) NSString *sessionId;

- (id)description;
- (void).cxx_destruct;
- (id)initWithVoiceRetrainingContext:(id)a0 error:(id *)a1;
- (id)initWithVoiceRetrainingContext:(id)a0 skipClassTypeValidate:(char)a1 error:(id *)a2;

@end
