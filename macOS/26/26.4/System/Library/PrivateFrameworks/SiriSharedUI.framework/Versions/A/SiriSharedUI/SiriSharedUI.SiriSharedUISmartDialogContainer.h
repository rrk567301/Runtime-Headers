@interface SiriSharedUI.SiriSharedUISmartDialogContainer : NSObject {
    void /* unknown type, empty encoding */ smartDialogData;
    void /* unknown type, empty encoding */ hostingController;
    void /* unknown type, empty encoding */ animationTrigger;
    void /* unknown type, empty encoding */ smartDialogInteractionManager;
    void /* unknown type, empty encoding */ delegate;
}

@property (nonatomic, weak) void /* function */ popoverViewController;
@property (nonatomic) BOOL allowDrillingInAndOut;
@property (nonatomic, readonly) BOOL shouldBeHidden;

- (id)initWithDelegate:(id)a0;
- (id)view;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)setInteractionDelegate:(id)a0;
- (id)init;
- (void)setIsInAmbient:(BOOL)a0;
- (void)triggerAnimation;
- (BOOL)containsSmartDialogSnippetWithViewId:(id)a0;
- (void)reloadView;
- (void)triggerSmartDialogAnimationWithDelay:(double)a0;
- (void)updateSmartDialogSnippetWithData:(id)a0;
- (void)updateWithSnippetFrameInGlobal:(id)a0;
- (void)updateWithSnippetContentInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (BOOL)hasDialogLikeFirstCardSection;
- (void)setSmartDialogWidth:(double)a0;
- (BOOL)siriDialogIsEmpty;
- (void)updateAttributionWithCardSections:(id)a0;
- (void)updateAttributionWithError:(id)a0;
- (void)updateAttributionWithPluginView:(id)a0;
- (void)updateSiriDialogWithText:(id)a0;
- (void)updateSnippetSizes;
- (void)updateWithActiveTranscriptItems:(id)a0;
- (void)updateWithBackgroundView:(id)a0;
- (void)updateWithBodyContentInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)updateWithCappedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithCornerRadius:(double)a0;
- (void)updateWithMaxSnippetWidth:(double)a0;
- (void)updateWithShowingSpeech:(BOOL)a0;
- (void)updateWithSmartDialogCard:(id)a0;
- (void)updateWithSmartDialogPluginView:(id)a0;

@end
