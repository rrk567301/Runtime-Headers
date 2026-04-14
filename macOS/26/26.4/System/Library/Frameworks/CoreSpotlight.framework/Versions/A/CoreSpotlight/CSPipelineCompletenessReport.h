@class NSString, NSNumber, NSDate;

@interface CSPipelineCompletenessReport : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *bundleID;
@property (readonly) NSString *pipeline;
@property (readonly) NSDate *reportDate;
@property (readonly) NSNumber *eligibleItems;
@property (readonly) NSNumber *pipelineCompleteness;
@property (readonly) NSNumber *pipelineCompletenessHeuristicScore;
@property (readonly) NSNumber *pipelineCompletenessFirstTimeBucket;
@property (readonly) NSNumber *pipelineCompletenessSecondBucket;
@property (readonly) NSNumber *pipelineCompletenessThirdBucket;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithPipelineName:(id)a0 bundleID:(id)a1 eligibleItems:(id)a2 pipelineCompleteness:(id)a3 pipelineCompletenessHeuristicScore:(id)a4 pipelineCompletenessFirstTimeBucket:(id)a5 pipelineCompletenessSecondBucket:(id)a6 pipelineCompletenessThirdBucket:(id)a7;

@end
