@class NSArray;

@interface MADVIMachineReadableCodeDetectionResult : MADResult

@property (readonly) unsigned long long executionNanoseconds;
@property (readonly) double executionTimeInterval;
@property (readonly, nonatomic) NSArray *resultItems;
@property (readonly, nonatomic) NSArray *observations;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithObservations:(id)a0;

@end
