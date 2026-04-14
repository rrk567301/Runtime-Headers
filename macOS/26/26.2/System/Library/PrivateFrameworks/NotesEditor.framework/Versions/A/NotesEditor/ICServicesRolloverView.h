@class NSTrackingArea;
@protocol ICServicesRolloverViewDelegate;

@interface ICServicesRolloverView : NSView

@property (retain) NSTrackingArea *rolloverTrackingArea;
@property (weak, nonatomic) id<ICServicesRolloverViewDelegate> delegate;
@property (nonatomic) long long style;
@property (nonatomic) struct CGSize { double width; double height; } rolloverViewInset;

- (void)mouseEntered:(id)a0;
- (void)viewWillMoveToWindow:(id)a0;
- (void)mouseDown:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)viewDidMoveToWindow;
- (void)mouseExited:(id)a0;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (void)updateTrackingAreas;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)_servicesRolloverViewCommonInit;
- (void)_hideServicePickerWithoutAnimation;
- (void)_showServicePicker;
- (double)_showServicesPickerDelay;
- (void)_viewDidChangeBounds:(id)a0;
- (void)icaxShowServicePicker;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })insetVisibleRect;

@end
