@class AVSynchronizedLayer, AVPlayerItem;

@interface PMAVSynchronizedView : NSView

@property (retain, nonatomic) AVSynchronizedLayer *layer;
@property (retain, nonatomic) AVPlayerItem *playerItem;

+ (Class)layerClass;

- (id)init;
- (id)makeBackingLayer;

@end
