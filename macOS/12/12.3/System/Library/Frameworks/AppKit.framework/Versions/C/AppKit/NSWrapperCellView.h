@class NSCell;

@interface NSWrapperCellView : NSView

@property (nonatomic, getter=isGroupRowStyle) BOOL groupRowStyle;
@property (retain, nonatomic) NSCell *cell;

+ (Class)cellClass;

- (void)dealloc;
- (void)setObjectValue:(id)a0;
- (BOOL)allowsVibrancy;
- (BOOL)isOpaque;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (Class)_animatorClass;
- (void)mouseDown:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBackgroundStyle:(long long)a0;
- (void)_setTrackingAreasDirty:(int)a0;
- (int)_trackingAreasDirty;
- (BOOL)wantsDefaultClipping;
- (id)_focusInto:(id)a0 withClip:(BOOL)a1;
- (id)_enclosingTableView;

@end
