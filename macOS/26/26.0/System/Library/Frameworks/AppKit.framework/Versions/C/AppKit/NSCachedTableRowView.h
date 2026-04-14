@class NSString, NSImage;

@interface NSCachedTableRowView : NSTableRowView

@property (class, readonly) NSString *defaultIdentifier;

@property (retain) NSImage *cachedImage;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isOpaque;
- (void)updateLayer;
- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setEmphasized:(BOOL)a0;
- (Class)_animatorClass;
- (void)_cacheRowImageFromTableView;
- (void)_setTrackingAreasDirty:(unsigned long long)a0;
- (long long)_trackingAreasDirty;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)wantsUpdateLayer;

@end
