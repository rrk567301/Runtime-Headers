@class CALayer;

@interface IKImageBlockLayer : CALayer

@property (retain) CALayer *maskTile;

- (double)contentsScale;
- (void)dealloc;

@end
