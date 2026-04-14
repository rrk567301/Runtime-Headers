@class NSArray;

@interface MADVIRectangleDetectionResult : MADResult

@property (readonly, nonatomic) NSArray *observations;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithObservations:(id)a0;

@end
