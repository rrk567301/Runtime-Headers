@class NSString;

@interface CRLineWrappingParameters : NSObject

@property (nonatomic, readonly) float probabilityThreshold;
@property (nonatomic, readonly) float heightSimilarityRatio;
@property (nonatomic, readonly) float angleSimilarityThreshold;
@property (nonatomic, readonly) long long lmContextSize;
@property (nonatomic, readonly) float oversegmentedDistanceHeightRatioTolerance;
@property (nonatomic, readonly) float oversegmentedDistanceHeightRatioListItemTolerance;
@property (nonatomic, readonly) float leadingDistanceRatioTolerance;
@property (nonatomic, readonly) float verticalSpacingRatioTolerance;
@property (nonatomic, readonly) float newParagraphIndentDistanceRatioTolerance;
@property (nonatomic, readonly) float widthGrowthLimit;
@property (nonatomic, readonly) long long wrappingEvaluationThreshold;
@property (nonatomic, readonly) long long noWrappingEvaluationThreshold;
@property (nonatomic, readonly) long long caseWrappingScoreWithNoCapitalization;
@property (nonatomic, readonly) long long punctuationWrappingScoreWithEndingMOS;
@property (nonatomic, readonly) long long punctuationWrappingScoreWithNoClosingPunctuation;
@property (nonatomic, readonly) float smallestVerticalDistanceHeightRatio;
@property (nonatomic, readonly) float maximumVerticalDistanceGrowthRatio;
@property (nonatomic, readonly) long long correctionMode;
@property (nonatomic, readonly) float confidenceThreshold;
@property (nonatomic, readonly) float contextConfidenceThreshold;
@property (nonatomic, readonly) double lmScoreThreshold;
@property (nonatomic, readonly) double lmScoreEOSMinRatio;
@property (nonatomic, readonly) long long tokenCountIncreaseLimit;
@property (nonatomic, readonly) NSString *description;

- (id)initWithLocale:(id)a0;
- (id)init;
- (id)initWithLocale:(id)a0 useStrictConfig:(BOOL)a1;
- (id)initWithLocale:(id)a0 useStrictConfig:(BOOL)a1 useHandwritingConfig:(BOOL)a2;

@end
