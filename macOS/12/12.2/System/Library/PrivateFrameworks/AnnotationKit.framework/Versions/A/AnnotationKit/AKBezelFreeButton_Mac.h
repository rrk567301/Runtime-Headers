@interface AKBezelFreeButton_Mac : NSButton

@property BOOL isInTrackingLoop;
@property BOOL isDragging;
@property BOOL allowsDrags;

- (void)dealloc;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)setImage:(id)a0;
- (BOOL)allowsVibrancy;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (id)makeBackingLayer;
- (void)_commonInit;
- (void)draggingEndedNotification:(id)a0;

@end
