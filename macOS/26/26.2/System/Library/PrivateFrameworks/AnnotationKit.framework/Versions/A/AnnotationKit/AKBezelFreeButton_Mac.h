@class AKGridViewItem;

@interface AKBezelFreeButton_Mac : NSButton

@property BOOL isInTrackingLoop;
@property BOOL isDragging;
@property BOOL allowsDrags;
@property (weak, nonatomic) AKGridViewItem *gridViewItem;

- (void)_commonInit;
- (void)setImage:(id)a0;
- (void)mouseDown:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)allowsVibrancy;
- (id)init;
- (void)dealloc;
- (id)makeBackingLayer;
- (void)draggingEndedNotification:(id)a0;

@end
