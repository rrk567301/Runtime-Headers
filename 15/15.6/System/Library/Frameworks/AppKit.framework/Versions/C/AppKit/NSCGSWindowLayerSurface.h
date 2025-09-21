@class CALayer;

@interface NSCGSWindowLayerSurface : NSCGSWindowSurface

@property (readonly, getter=isLocallyRendered) char locallyRendered;
@property struct CGColorSpace { } *colorSpace;
@property (getter=isOpaque) char opaque;
@property double scale;
@property unsigned int displayMask;
@property unsigned int displayNumber;
@property (retain) CALayer *layer;


@end
