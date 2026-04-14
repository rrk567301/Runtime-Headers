@class NSArray;

@interface MADVIRectangleDetectionResult : MADResult

@property (readonly, nonatomic) NSArray *observations;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithObservations:(id)a0;

@end
