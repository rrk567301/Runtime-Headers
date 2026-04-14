@class VKCImageAnalysisOverlayView;

@interface AVDesktopAnalysisPlayerLayerView : AVDesktopPlayerLayerView

@property (retain, nonatomic) VKCImageAnalysisOverlayView *visualAnalysisView;

- (void).cxx_destruct;
- (void)layout;
- (void)_updateVisualAnalysisViewFrameIfNeeded;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForVisualAnalysisOverlayView;

@end
