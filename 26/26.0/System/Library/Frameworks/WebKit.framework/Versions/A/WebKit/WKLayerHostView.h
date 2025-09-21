@interface WKLayerHostView : NSView

@property (nonatomic) unsigned int contextID;

- (id)layerHost;
- (BOOL)clipsToBounds;
- (id)makeBackingLayer;

@end
