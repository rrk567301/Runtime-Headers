@class NSView, NSImage, NSArray;
@protocol PXVKImageAnalysisOverlayViewDelegate, PXVKImageAnalysis;

@interface PXVKImageAnalysisOverlayView : NSView

@property (weak, nonatomic) id<PXVKImageAnalysisOverlayViewDelegate> delegate;
@property (nonatomic) unsigned long long activeInteractionTypes;
@property (retain, nonatomic) id<PXVKImageAnalysis> analysis;
@property (readonly, nonatomic) char hasActiveTextSelection;
@property (readonly, nonatomic) NSView *visualSearchCornerView;
@property (nonatomic) char didAddVisualSearchCornerView;
@property (nonatomic) char highlightSelectableItems;
@property (nonatomic) char actionInfoViewHidden;
@property (readonly, nonatomic) char isSubjectHighlightAvailable;
@property (nonatomic) char subjectHighlightActive;
@property (retain, nonatomic) NSImage *_photosImageForRemoveBackground;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } actionInfoEdgeInsets;
@property (readonly, nonatomic) NSArray *visualSearchResultItems;

- (void).cxx_destruct;
- (char)interactableItemExistsAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)resetSelection;
- (void)updateActionInfoLayout;
- (void)beginImageSubjectAnalysisIfNecessary;
- (char)dataDetectorExistsAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)loadImageSubjectIfAvailableWithCompletion:(id /* block */)a0;
- (char)textExistsAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (char)visualSearchExistsAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (char)imageSubjectExistsAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (char)actionInfoItemExistsAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)showVisualSearchForResultItem:(id)a0;

@end
