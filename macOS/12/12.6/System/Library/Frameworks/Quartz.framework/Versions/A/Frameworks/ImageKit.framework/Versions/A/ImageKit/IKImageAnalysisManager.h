@class NSString, VKImageAnalysisOverlayView, VKImageAnalyzer, NSURL, IKImageContentView;

@interface IKImageAnalysisManager : NSObject <VKImageAnalysisOverlayViewDelegate>

@property (retain) VKImageAnalyzer *imageAnalyzer;
@property (retain) VKImageAnalysisOverlayView *overlayView;
@property (retain) NSURL *overrideImageURL;
@property (weak, nonatomic) IKImageContentView *imageContentView;
@property (readonly) BOOL hasActiveTextSelection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)_exifToVKImageOrientation:(unsigned long long)a0;
+ (id)keyPathsForValuesAffectingHasActiveTextSelection;

- (id)init;
- (void).cxx_destruct;
- (void)copy:(id)a0;
- (void)selectAll:(id)a0;
- (BOOL)hasResultsForAnalysisTypes:(unsigned long long)a0;
- (void)refreshImageOverlayWithInteraction:(unsigned long long)a0 needsReanalysis:(BOOL)a1;
- (BOOL)textExistsAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)dataDetectorExistsAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)visualSearchExistsAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_updateWithInteractionTypes:(unsigned long long)a0;
- (id)_getAnalyzerRequest;
- (void)resetSelection;
- (BOOL)imageAnalysisOvlerlayView:(id)a0 shouldBeginAtPoint:(struct CGPoint { double x0; double x1; })a1 forAnalysisType:(unsigned long long)a2;
- (id)contentViewForImageAnalysisOverlayView:(id)a0;
- (void)forceReanalysisWithFlattenedImageAtURL:(id)a0;
- (void)hideAllInteractions;
- (void)imageViewChanged:(id)a0;

@end
