@class CCWarpServiceDescriptor;

@interface CCWarpAlgorithmForwardDescriptor : CCAlgorithmDescriptor

@property (retain, nonatomic) CCWarpServiceDescriptor *warpServiceDescriptor;
@property (nonatomic) BOOL warpDisableColor;
@property (nonatomic) BOOL useCameraProjection;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
