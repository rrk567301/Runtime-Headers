@class NSString, NSNumber;
@protocol DonationProgressReporting;

@interface CSIndexingPipelineOverallCompletenessForBundle : CSIndexingPipelineOverallCompleteness <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *bundleID;
@property (readonly) id<DonationProgressReporting> donationProgress;
@property (readonly) NSNumber *pipelineCompletenessFirstTimeBucket;
@property (readonly) NSNumber *pipelineCompletenessSecondBucket;
@property (readonly) NSNumber *pipelineCompletenessThirdBucket;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithPipeline:(id)a0 bundleID:(id)a1 overallCompleteness:(id)a2 donationCompeleteness:(id)a3 pipelineCompleteness:(id)a4 pipelineCompletenessHeuristicScore:(id)a5 pipelineReportAge:(double)a6 donationProgress:(id)a7 pipelineCompletenessFirstTimeBucket:(id)a8 pipelineCompletenessSecondBucket:(id)a9 pipelineCompletenessThirdBucket:(id)a10;

@end
