@class CCWarpServiceDescriptor;

@interface CCWarpAlgorithmForwardDescriptor : CCAlgorithmDescriptor

@property (retain, nonatomic) CCWarpServiceDescriptor *warpServiceDescriptor;
@property (nonatomic) BOOL warpDisableColor;
@property (nonatomic) BOOL useCameraProjection;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
