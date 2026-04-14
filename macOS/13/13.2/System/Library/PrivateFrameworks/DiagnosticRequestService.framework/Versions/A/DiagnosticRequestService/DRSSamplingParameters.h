@interface DRSSamplingParameters : NSObject <DRJSONRepresentable>

@property (readonly, nonatomic) double samplingPercentage;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)debugDescription;
- (id)jsonDictRepresentation;
- (id)initWithJSONDict:(id)a0;
- (id)initWithSamplingPercentage:(double)a0;
- (BOOL)isEqualToSamplingParameters:(id)a0;

@end
