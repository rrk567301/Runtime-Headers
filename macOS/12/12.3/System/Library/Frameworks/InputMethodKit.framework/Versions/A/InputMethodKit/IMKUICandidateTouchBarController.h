@class NSViewController;

@interface IMKUICandidateTouchBarController : IMKUICandidateController {
    NSViewController *_viewController;
}

@property (nonatomic) unsigned long long numberOfSimilarWidthCandidates;
@property (nonatomic) BOOL secondaryCandidatesShowChevron;
@property (nonatomic) double surfaceWidth;
@property (readonly, nonatomic) NSViewController *viewController;

- (void)dealloc;
- (id)init;
- (double)numberOfColumns;
- (BOOL)handleKeyboardEvent:(id)a0;
- (BOOL)showsAnnotations;
- (id)candidateDataForSortingMethod:(id)a0;
- (id)layoutConstraintsForData:(id)a0;
- (void)reloadWithUpdatingFirstCandidate:(BOOL)a0;
- (double)lineViewWidth;
- (struct CGSize { double x0; double x1; })preferredCanvasSize;
- (void)arrangeCanvasElements;
- (struct CGSize { double x0; double x1; })customSize;
- (void)updateCandidateThickness;
- (void)updateCandidateCanvas;
- (double)widthOfStandardRow;
- (void)scrubbedCandidate:(id)a0;
- (void)shouldUpdateForPressAndHold:(id)a0;
- (void)touchesEnded;
- (void)touchesEndedOutsideView;
- (void)showPrimaryCandidateWindowAndSelectCandidate:(id)a0;
- (void)initializeCanvas;
- (void)updateHighlightForLineView:(id)a0;
- (double)maxWidthForTouchBarCandidates;
- (double)minimumWidthForCandidate:(id)a0;
- (id)candidateDataToFit:(id)a0;

@end
