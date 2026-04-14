@protocol SidebarTableCellViewDelegate;

@interface SidebarTableCellView : RolloverActionButtonTableCellView

@property (weak, nonatomic) id<SidebarTableCellViewDelegate> delegate;
@property (readonly, nonatomic) double calculatedHeightOfRow;
@property (nonatomic, getter=isOffscreenCellForMeasurements) BOOL offscreenCellForMeasurements;

+ (double)fixedHeightOfRow;
+ (BOOL)hasVariableHeight;

- (id)accessibilityLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (id)initWithCoder:(id)a0;
- (id)accessibilityRole;
- (BOOL)isAccessibilityElement;
- (void)setAccessibilityLabel:(id)a0;
- (id)accessibilityContents;
- (BOOL)accessibilityPerformPress;
- (void)setAccessibilityContents:(id)a0;
- (double)_actionButtonHorizontalMargin;
- (double)_actionButtonTopMargin;
- (double)_actionButtonYOffsetWhenVerticallyCentered;

@end
