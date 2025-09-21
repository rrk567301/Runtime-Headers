@interface AXMVisionFeatureAestheticsResult : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) float aestheticScore;
@property (readonly, nonatomic) float wellFramedSubjectScore;
@property (readonly, nonatomic) float pleasantCompositionScore;
@property (readonly, nonatomic) float wellChosenBackgroundScore;
@property (readonly, nonatomic) float noiseScore;
@property (readonly, nonatomic) float failureScore;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithVisionAestheticsObservation:(id)a0;

@end
