@interface CASDFGeneratorRequest : NSObject

@property (nonatomic) long long outputBitDepth;
@property (nonatomic) double padding;
@property (nonatomic) double maximumDistance;
@property (nonatomic) BOOL includeGradient;
@property (nonatomic) double gradientSmoothing;
@property (nonatomic) double zeroValueDistance;
@property (nonatomic) double oneValueDistance;

+ (id)request;
+ (id)requestForEffect:(id)a0;
+ (id)requestForEffects:(id)a0;

- (id)init;
- (void)_resetConfiguration;
- (void)_unionConfigurationForEffect:(id)a0;

@end
