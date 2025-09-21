@class NSString, NSArray;

@interface BMASRRequestMetricsRecord : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *asrId;
@property (readonly, nonatomic) NSString *requestId;
@property (readonly, nonatomic) double timestamp;
@property (nonatomic) char hasTimestamp;
@property (readonly, nonatomic) NSString *invocationType;
@property (readonly, nonatomic) NSString *triggerType;
@property (readonly, nonatomic) NSString *asrTask;
@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) NSString *clientId;
@property (readonly, nonatomic) NSString *geoLMRegionId;
@property (readonly, nonatomic) NSString *locale;
@property (readonly, nonatomic) unsigned int audioDurationMs;
@property (nonatomic) char hasAudioDurationMs;
@property (readonly, nonatomic) unsigned int recognitionDurationMs;
@property (nonatomic) char hasRecognitionDurationMs;
@property (readonly, nonatomic) int completionState;
@property (readonly, nonatomic) double snrRatio;
@property (nonatomic) char hasSnrRatio;
@property (readonly, nonatomic) double avgPitch;
@property (nonatomic) char hasAvgPitch;
@property (readonly, nonatomic) char jitLmeUsed;
@property (nonatomic) char hasJitLmeUsed;
@property (readonly, nonatomic) char aotLmeUsed;
@property (nonatomic) char hasAotLmeUsed;
@property (readonly, nonatomic) char jitLmeRecognized;
@property (nonatomic) char hasJitLmeRecognized;
@property (readonly, nonatomic) char aotLmeRecognized;
@property (nonatomic) char hasAotLmeRecognized;
@property (readonly, nonatomic) NSString *deviceClass;
@property (readonly, nonatomic) NSString *deviceType;
@property (readonly, nonatomic) NSString *deviceBuild;
@property (readonly, nonatomic) char isSiriOptIn;
@property (nonatomic) char hasIsSiriOptIn;
@property (readonly, nonatomic) char isAssistantEnabled;
@property (nonatomic) char hasIsAssistantEnabled;
@property (readonly, nonatomic) char isDictationEnabled;
@property (nonatomic) char hasIsDictationEnabled;
@property (readonly, nonatomic) char isMultipleDictationKeyboardsInstalled;
@property (nonatomic) char hasIsMultipleDictationKeyboardsInstalled;
@property (readonly, nonatomic) NSArray *enabledDictationLocales;
@property (readonly, nonatomic) NSArray *activeDictationLanguages;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)columns;
+ (id)validKeyPaths;
+ (id)protoFields;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)jsonDictionary;
- (void)writeTo:(id)a0;
- (id)serialize;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (id)initWithAsrId:(id)a0 requestId:(id)a1 timestamp:(id)a2 invocationType:(id)a3 triggerType:(id)a4 asrTask:(id)a5 bundleId:(id)a6 clientId:(id)a7 geoLMRegionId:(id)a8 locale:(id)a9 audioDurationMs:(id)a10 recognitionDurationMs:(id)a11 completionState:(int)a12 snrRatio:(id)a13 avgPitch:(id)a14 jitLmeUsed:(id)a15 aotLmeUsed:(id)a16 jitLmeRecognized:(id)a17 aotLmeRecognized:(id)a18 deviceClass:(id)a19 deviceType:(id)a20 deviceBuild:(id)a21 isSiriOptIn:(id)a22 isAssistantEnabled:(id)a23 isDictationEnabled:(id)a24 isMultipleDictationKeyboardsInstalled:(id)a25 enabledDictationLocales:(id)a26 activeDictationLanguages:(id)a27;
- (id)_activeDictationLanguagesJSONArray;
- (id)_enabledDictationLocalesJSONArray;

@end
