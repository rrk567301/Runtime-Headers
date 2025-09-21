@class CALayer;

@interface VFXCoreAnimationSource : VFXImageSource

@property (retain, nonatomic) CALayer *layer;

- (void)dealloc;
- (char)isOpaque;
- (id)textureSource;

@end
