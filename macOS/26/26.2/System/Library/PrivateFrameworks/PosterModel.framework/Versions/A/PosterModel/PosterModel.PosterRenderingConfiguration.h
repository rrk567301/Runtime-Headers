@interface PosterModel.PosterRenderingConfiguration : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ isDepthEffectDisabled;
    void /* unknown type, empty encoding */ areMotionEffectsDisabled;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;

@end
