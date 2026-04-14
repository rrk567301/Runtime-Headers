@class NSString, _MLTLogger;
@protocol MLBatchProvider;

@interface _MLTModelUpdateValidatorConfiguration : NSObject

@property (retain) NSString *recipePath;
@property (retain) _MLTLogger *logger;
@property BOOL useBatchPrediction;
@property (retain) id<MLBatchProvider> validationDataProvider;

- (void).cxx_destruct;
- (id)init;

@end
