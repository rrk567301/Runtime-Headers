@class LTUIVisualTranslationView, NSView, VKCVisualSearchResult;

@interface VKCImageTranslationView : VKCImageBaseOverlayView

@property (retain, nonatomic) LTUIVisualTranslationView *visualTranslationView;
@property (weak, nonatomic) NSView *presentationAnchorView;
@property BOOL translationNeedsUpdate;
@property (retain, nonatomic) VKCVisualSearchResult *visualSearchResult;

- (id)init;
- (void).cxx_destruct;
- (void)setRecognitionResult:(id)a0;
- (void)checkForTranslationResultsWithCompletion:(id /* block */)a0;
- (void)showTranslationOverlay;
- (id)recognizedLines;
- (void)hideTranslationOverlay;

@end
