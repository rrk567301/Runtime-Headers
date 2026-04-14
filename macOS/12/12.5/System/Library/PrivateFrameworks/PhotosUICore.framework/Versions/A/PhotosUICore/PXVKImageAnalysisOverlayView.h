@class NSView;
@protocol PXVKImageAnalysisOverlayViewDelegate, PXVKImageAnalysis;

@interface PXVKImageAnalysisOverlayView : NSView

@property (weak, nonatomic) id<PXVKImageAnalysisOverlayViewDelegate> delegate;
@property (nonatomic) unsigned long long activeInteractionTypes;
@property (retain, nonatomic) id<PXVKImageAnalysis> analysis;
@property (readonly, nonatomic) BOOL hasActiveTextSelection;
@property (readonly, nonatomic) NSView *visualSearchCornerView;
@property (nonatomic) BOOL didAddVisualSearchCornerView;

- (void).cxx_destruct;
- (BOOL)textExistsAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)dataDetectorExistsAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)visualSearchExistsAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)resetSelection;
- (BOOL)interactableItemExistsAtPoint:(struct CGPoint { double x0; double x1; })a0;

@end
