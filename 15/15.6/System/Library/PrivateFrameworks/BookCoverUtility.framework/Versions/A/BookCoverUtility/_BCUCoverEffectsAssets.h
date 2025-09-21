@interface _BCUCoverEffectsAssets : NSObject

@property (readonly, nonatomic) struct CGImage { } *spineNormalBlend;
@property (readonly, nonatomic) struct CGImage { } *spineLinearBurnBlend;
@property (readonly, nonatomic) struct CGImage { } *spineSoftLightBlend;
@property (readonly, nonatomic) struct CGImage { } *edges;
@property (readonly, nonatomic) struct CGColor { } *overlayColor;

- (id)initWithBundle:(id)a0 rtl:(char)a1 night:(char)a2 small:(char)a3;
- (id)initWithBundle:(id)a0 rtl:(char)a1 night:(char)a2;

@end
