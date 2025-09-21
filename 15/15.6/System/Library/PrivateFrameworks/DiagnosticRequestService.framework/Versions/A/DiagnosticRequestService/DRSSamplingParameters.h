@interface DRSSamplingParameters : NSObject <DRJSONRepresentable>

@property (readonly, nonatomic) double samplingPercentage;

- (id)debugDescription;
- (id)description;
- (char)isEqual:(id)a0;
- (id)jsonDictRepresentation;
- (id)initWithJSONDict:(id)a0;
- (id)initWithSamplingPercentage:(double)a0;
- (char)isEqualToSamplingParameters:(id)a0;

@end
