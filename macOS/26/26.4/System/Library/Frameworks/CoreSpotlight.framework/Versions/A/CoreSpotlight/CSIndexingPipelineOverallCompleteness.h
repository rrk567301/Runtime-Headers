@class NSString, NSNumber;

@interface CSIndexingPipelineOverallCompleteness : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *pipeline;
@property (readonly) NSNumber *overallCompleteness;
@property (readonly) double sufficientlyCompleteThreshold;
@property (readonly) BOOL isSufficientlyComplete;
@property (readonly) NSNumber *donationCompeleteness;
@property (readonly) NSNumber *pipelineCompleteness;
@property (readonly) NSNumber *pipelineCompletenessHeuristicScore;
@property (readonly) double pipelineReportAge;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithPipeline:(id)a0 overallCompleteness:(id)a1 donationCompeleteness:(id)a2 pipelineCompleteness:(id)a3 pipelineCompletenessHeuristicScore:(id)a4 pipelineReportAge:(double)a5;

@end
