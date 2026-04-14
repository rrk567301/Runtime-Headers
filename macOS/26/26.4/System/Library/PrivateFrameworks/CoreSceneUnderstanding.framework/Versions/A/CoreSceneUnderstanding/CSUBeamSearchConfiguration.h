@class NSNumber;

@interface CSUBeamSearchConfiguration : NSObject

@property (copy, nonatomic) NSNumber *beamWidth;
@property (copy, nonatomic) NSNumber *maxSteps;
@property (copy, nonatomic) NSNumber *topK;
@property (copy, nonatomic) NSNumber *lengthNormalizationAlpha;

- (void).cxx_destruct;
- (id)init;

@end
