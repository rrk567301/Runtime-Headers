@class _PASLock, TRIClient;

@interface SGMITrialClientWrapper : NSObject {
    _PASLock *_lock;
}

@property (retain, nonatomic) TRIClient *triClient;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)isEnabled;
- (void)refresh;
- (id)modelPath;
- (id)trialMetadata;
- (id)saliencyOverrideFeatureNames;
- (id)saliencyOverrideFeatureLowerBounds;
- (id)saliencyOverrideFeatureUpperBounds;
- (id)saliencyOverrideOutputs;
- (id)modelFeatureNames;
- (id)modelFeatureStandardizationMeans;
- (id)modelFeatureStandardizationStandardDeviations;
- (id)modelGroundTruthFeatureNames;
- (id)modelGroundTruthFeatureLowerBounds;
- (id)modelGroundTruthFeatureUpperBounds;
- (id)modelGroundTruthOutputs;
- (id)classificationThreshold;
- (id)minCountToConsiderATokenAsHighlyDiscriminant;
- (id)ratioToConsiderATokenAsHighlyDiscriminant;
- (id)minCountToConsiderATokenAsExtremelyDiscriminant;
- (id)ratioToConsiderATokenAsExtremelyDiscriminant;
- (id)modelGroundTruthVersion;
- (id)modelInferenceVersion;
- (id)isDNUOnlyEnablement;
- (id)attachmentDetectionRegexes;
- (id)recipientDetectionRegexes;
- (id)followUpDetectionRegexes;
- (id)bodyAnalysisSamplingFactor;
- (void)loadFactors;
- (id)concatPathWithPrefix:(id)a0 suffix:(id)a1 extra:(id)a2;
- (id)loadLevelAsBooleanFromFactor:(id)a0;
- (id)loadLevelAsStringFromFactor:(id)a0;
- (id)loadLevelAsModelPath:(id)a0;
- (id)loadLevelAsStringArrayFromFactor:(id)a0;
- (id)loadLevelAsNumericArrayFromFactor:(id)a0;
- (id)loadLevelAsNumericDictionaryFromFactor:(id)a0;
- (id)loadLevelAsNumericFromFactor:(id)a0;
- (id)loadLevelAsLongFromFactor:(id)a0;
- (id)arrayFromPathWithPrefix:(id)a0 suffix:(id)a1;
- (id)dictionaryFromPathWithPrefix:(id)a0 suffix:(id)a1;
- (id)classificationOfflinePrecision;
- (id)classificationOfflineRecall;

@end
