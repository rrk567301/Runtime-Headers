@class NSArray;

@interface MADVIMachineReadableCodeDetectionRequest : MADRequest

@property (readonly, nonatomic) NSArray *symbologies;

+ (BOOL)supportsSecureCoding;
+ (unsigned long long)targetResolution;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSymbologies:(id)a0;

@end
