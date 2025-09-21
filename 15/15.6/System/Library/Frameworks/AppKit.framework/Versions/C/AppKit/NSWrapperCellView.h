@class NSCell;

@interface NSWrapperCellView : NSView

@property (nonatomic, getter=isGroupRowStyle) char groupRowStyle;
@property (retain, nonatomic) NSCell *cell;

+ (Class)cellClass;

- (void)dealloc;
- (void)setObjectValue:(id)a0;
- (Class)_animatorClass;
- (id)_enclosingTableView;
- (id)_focusInto:(id)a0 withClip:(char)a1;
- (void)_setTrackingAreasDirty:(unsigned long long)a0;
- (long long)_trackingAreasDirty;
- (char)allowsVibrancy;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)isOpaque;
- (void)mouseDown:(id)a0;
- (void)setBackgroundStyle:(long long)a0;
- (char)wantsDefaultClipping;

@end
