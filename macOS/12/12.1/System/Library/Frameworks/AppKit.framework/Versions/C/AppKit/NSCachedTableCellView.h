@class NSImage;

@interface NSCachedTableCellView : NSControl

@property (retain) NSImage *cachedImage;

- (void)dealloc;
- (BOOL)isOpaque;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setTrackingAreasDirty:(int)a0;
- (int)_trackingAreasDirty;

@end
