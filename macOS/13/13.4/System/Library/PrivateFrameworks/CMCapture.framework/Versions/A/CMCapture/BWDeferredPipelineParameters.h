@interface BWDeferredPipelineParameters : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int nrfVersion;
@property (nonatomic) BOOL intelligentDistortionCorrectionEnabled;
@property (nonatomic) BOOL geometricDistortionCorrectionEnabled;
@property (nonatomic) int distortionCorrectionVersion;
@property (nonatomic) int deepZoomVersion;
@property (nonatomic) BOOL quadraProcessingSupportEnabled;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
