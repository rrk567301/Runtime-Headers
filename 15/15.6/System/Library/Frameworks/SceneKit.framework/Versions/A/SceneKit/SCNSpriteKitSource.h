@class SKScene;

@interface SCNSpriteKitSource : SCNImageSource

@property (retain, nonatomic) SKScene *scene;

- (void)dealloc;
- (char)isOpaque;
- (id)textureSource;

@end
