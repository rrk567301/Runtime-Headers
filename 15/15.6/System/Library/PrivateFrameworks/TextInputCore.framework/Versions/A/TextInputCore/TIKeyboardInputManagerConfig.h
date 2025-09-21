@class NSString, NSDictionary, TIInputMode, NSArray, NSNumber, NSURL;

@interface TIKeyboardInputManagerConfig : NSObject

@property (retain, nonatomic) TIInputMode *inputMode;
@property (copy, nonatomic) NSString *staticDictionaryPath;
@property (copy, nonatomic) NSString *dynamicResourcePath;
@property (copy, nonatomic) NSString *ngramModelPath;
@property (copy, nonatomic) NSString *shapeStoreResourceDir;
@property (nonatomic) char allowsSpaceCorrections;
@property (nonatomic) char usesTextChecker;
@property (nonatomic) char usesRetrocorrection;
@property (nonatomic) char usesWordNgramModel;
@property (nonatomic) char usesAdaptation;
@property (nonatomic) char negativeLearningDisabled;
@property (nonatomic) char usesWordNgramModelAdaptation;
@property (nonatomic) unsigned long long maxWordsPerPrediction;
@property (nonatomic) char completionsShouldSharePrefix;
@property (nonatomic) char usesStemSuffixCorrectionFactor;
@property (nonatomic) char usesETSRescoring;
@property (nonatomic) char languageAllowsCP;
@property (nonatomic) char usesContinuousPath;
@property (copy, nonatomic) NSDictionary *continuousPathParams;
@property (copy, nonatomic) NSArray *continuousPathEnsembleSourceWeights;
@property (copy, nonatomic) NSArray *continuousPathEnsembleSourceScales;
@property (nonatomic) char usesContinuousPathProgressiveCandidates;
@property (nonatomic) double continuousPathLanguageWeight;
@property (nonatomic) char continuousPathDeleteWholeWord;
@property (nonatomic) char continuousPathDetectPause;
@property (nonatomic) char continuousPathCompletesWords;
@property (nonatomic) char insertsSpaceAfterPredictiveInput;
@property (nonatomic) int continuousPathEnabledAlgorithms;
@property (nonatomic) char usesContinuousPathRetrocorrection;
@property (nonatomic) char shouldIgnoreCPRequirements;
@property (nonatomic) int cpConfidenceModelType;
@property (nonatomic) long long cpCandidatesCount;
@property (nonatomic) char includeLightWeightLanguageModelMobileAssets;
@property (nonatomic) char usesCJContinuousPath;
@property (nonatomic) char stickerSuggestionsEnabled;
@property (nonatomic, getter=isTesting) char testing;
@property (nonatomic) char skipLanguageLayoutCheckCPML;
@property (nonatomic) char usesCustomNgramModel;
@property (nonatomic) char usesCustomStaticDictionary;
@property (copy, nonatomic) NSNumber *favoniusLanguageModelWeight;
@property (nonatomic) char usesDODMLLogging;
@property (nonatomic) char sensorKitEnabled;
@property (nonatomic) unsigned long long sensorKitWordsThreshold;
@property (nonatomic) char allowRelaxedOVSPolicy;
@property (nonatomic) char usesUserModelLogging;
@property (nonatomic) char skipCandidateQualityFilter;
@property (nonatomic) char disableAnalytics;
@property (copy, nonatomic) NSURL *mlttBundleURL;

+ (id)configurationForInputMode:(id)a0;

- (void).cxx_destruct;
- (id)propertyList;

@end
