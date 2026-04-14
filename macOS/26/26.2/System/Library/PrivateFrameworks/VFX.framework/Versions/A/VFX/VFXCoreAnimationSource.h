@class CALayer;

@interface VFXCoreAnimationSource : VFXImageSource

@property (retain, nonatomic) CALayer *layer;

- (BOOL)isOpaque;
- (void)dealloc;
- (id)textureSource;

@end
