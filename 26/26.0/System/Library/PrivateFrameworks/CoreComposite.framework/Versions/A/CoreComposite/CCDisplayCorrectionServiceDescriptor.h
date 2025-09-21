@class CCIgnoreFlagAlgorithmDescriptor, CCBlurAlgorithmDescriptor;

@interface CCDisplayCorrectionServiceDescriptor : CCServiceDescriptor

@property (nonatomic) long long correctionAlgorithm;
@property (retain, nonatomic) CCIgnoreFlagAlgorithmDescriptor *ignoreFlagDescriptor;
@property (retain, nonatomic) CCBlurAlgorithmDescriptor *meshComputeDepthBlurDescriptor;
@property (retain, nonatomic) CCBlurAlgorithmDescriptor *inputDepthBlurDescriptor;
@property (nonatomic) BOOL mattingEnabled;
@property (nonatomic) BOOL depthReprojectionEnabled;
@property (nonatomic) BOOL inputDepthBlurEnabled;
@property (nonatomic) BOOL meshComputeDepthBlurEnabled;
@property (nonatomic) BOOL encodeToTargetBuffers;
@property (nonatomic) BOOL enablePrototypingFeatures;

+ (BOOL)supportsSecureCoding;
+ (id)new;

- (void)acceptVisitor:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isSupported;

@end
