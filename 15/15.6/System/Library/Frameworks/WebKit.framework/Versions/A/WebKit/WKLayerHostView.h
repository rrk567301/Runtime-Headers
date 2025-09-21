@interface WKLayerHostView : NSView

@property (nonatomic) unsigned int contextID;

- (char)clipsToBounds;
- (id)layerHost;
- (id)makeBackingLayer;

@end
