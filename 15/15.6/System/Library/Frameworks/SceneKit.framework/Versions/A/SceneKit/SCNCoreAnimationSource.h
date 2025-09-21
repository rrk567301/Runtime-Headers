@class CALayer;

@interface SCNCoreAnimationSource : SCNImageSource

@property (retain, nonatomic) CALayer *layer;

- (void)dealloc;
- (char)isOpaque;
- (id)textureSource;

@end
