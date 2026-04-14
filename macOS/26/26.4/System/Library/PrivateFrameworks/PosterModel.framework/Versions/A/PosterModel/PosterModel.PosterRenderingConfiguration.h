@interface PosterModel.PosterRenderingConfiguration : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ isDepthEffectDisabled;
    void /* unknown type, empty encoding */ areMotionEffectsDisabled;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
