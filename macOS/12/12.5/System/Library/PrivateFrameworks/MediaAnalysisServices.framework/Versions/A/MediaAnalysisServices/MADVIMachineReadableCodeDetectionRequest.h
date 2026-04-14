@class NSArray;

@interface MADVIMachineReadableCodeDetectionRequest : MADRequest

@property (readonly, nonatomic) NSArray *symbologies;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithSymbologies:(id)a0;

@end
