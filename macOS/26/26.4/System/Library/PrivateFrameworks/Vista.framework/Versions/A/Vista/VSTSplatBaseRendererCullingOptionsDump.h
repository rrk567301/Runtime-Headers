@interface VSTSplatBaseRendererCullingOptionsDump : VSTSplatVersionDump

@property (nonatomic) BOOL useNormalCulling;
@property (nonatomic) BOOL useBoundingBoxCulling;
@property (nonatomic) BOOL usePreciseFrustumCulling;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)metadata;
- (id)initWithCoder:(id)a0;

@end
