@class NSString;

@interface FeatureExtractorConfig : NSObject

@property (nonatomic) long long cmvnSlidingWindowLength;
@property (nonatomic) long long cmvnMinWindowLength;
@property (nonatomic) long long spliceLeftContext;
@property (nonatomic) long long spliceRightContext;
@property (nonatomic) long long downSampleStride;
@property (nonatomic) long long nnetIntakeFeatureLength;
@property (nonatomic) long long nnetVectorSize;
@property (nonatomic, readonly) NSString *description;

- (id)init;

@end
