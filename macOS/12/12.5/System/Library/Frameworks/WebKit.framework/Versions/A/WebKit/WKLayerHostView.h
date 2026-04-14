@interface WKLayerHostView : NSView

@property (nonatomic) unsigned int contextID;

- (id)makeBackingLayer;
- (id)layerHost;

@end
