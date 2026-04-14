@interface WKLayerHostView : NSView

@property (nonatomic) unsigned int contextID;

- (id)layerHost;
- (id)makeBackingLayer;

@end
