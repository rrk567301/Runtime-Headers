@class NSPressGestureRecognizer;

@interface PXNSFocusTimelineView : PXFocusTimelineView

@property (retain, nonatomic) NSPressGestureRecognizer *pressGesture;

+ (id)autoFocusEventMarkerImage;
+ (id)userInitiatedFocusEventMarkerImage;

- (id)init;
- (void).cxx_destruct;
- (void)_handlePress:(id)a0;
- (void)_PXNSFocusTimelineView_commonInit;
- (void)_handleClickGesture:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })backingAlignedRectForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
