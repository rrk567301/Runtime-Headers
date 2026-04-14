@class NSCell;

@interface NSWrapperCellView : NSView

@property (nonatomic, getter=isGroupRowStyle) BOOL groupRowStyle;
@property (retain, nonatomic) NSCell *cell;

+ (Class)cellClass;

- (void)mouseDown:(id)a0;
- (void)setObjectValue:(id)a0;
- (void)setBackgroundStyle:(long long)a0;
- (BOOL)isOpaque;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)allowsVibrancy;
- (void)dealloc;
- (Class)_animatorClass;
- (id)_enclosingTableView;
- (id)_focusInto:(id)a0 withClip:(BOOL)a1;
- (void)_setTrackingAreasDirty:(unsigned long long)a0;
- (long long)_trackingAreasDirty;
- (BOOL)wantsDefaultClipping;

@end
