@class NSString, NSArray, NSDictionary;

@interface PGMeaningActionCriteria : NSObject <PGMeaningCriteria>

@property (retain, nonatomic) NSString *actionName;
@property (nonatomic) long long actionValue;
@property (retain, nonatomic) NSArray *descendingSortedMediaAnalysisVersion;
@property (retain, nonatomic) NSDictionary *highPrecisionThresholdByMediaAnalysisVersion;
@property (retain, nonatomic) NSDictionary *highRecallThresholdByMediaAnalysisVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)criteriaKey;
+ (id)criteriaWithDictionary:(id)a0;
+ (id)parseThresholdFromCriteriaDictionary:(id)a0 usingActionThresholdKey:(id)a1;
+ (id)descendingSortedMediaAnalysisVersionFromCriteriaDictionary:(id)a0 usingActionThresholdKey:(id)a1;
+ (id)actionValueStringUsingActionCriteriaByValidPersonActivityMeaningLabel:(id)a0 withPersonActivityMeaningLabel:(id)a1;
+ (double)actionHighRecallThresholdForAssetMediaAnalysisVersion:(unsigned long long)a0 usingActionCriteriaByValidPersonActivityMeaningLabel:(id)a1 andValidPersonActivity:(id)a2;

- (BOOL)isValid;
- (void).cxx_destruct;
- (BOOL)passesForMomentNode:(id)a0 momentNodeCache:(id)a1;
- (BOOL)passesForAssets:(id)a0;
- (BOOL)passesCriteriaWithTrait:(id)a0 withHighPrecisionThreshold:(double)a1;
- (double)actionThresholdForAssetMediaAnalysisVersion:(unsigned long long)a0 withActionThresholdByMediaAnalysisVersion:(id)a1;

@end
