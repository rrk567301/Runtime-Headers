@class AVPlayerLayer;

@interface _AVSimplePlayerLayerView : NSView

@property (readonly, nonatomic) AVPlayerLayer *playerLayer;

+ (id)keyPathsForValuesAffectingPlayerLayer;
+ (Class)layerClass;

@end
