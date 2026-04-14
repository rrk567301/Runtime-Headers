@interface SiriSharedUI.SiriSharedUISmartDialogContainer : NSObject {
    void /* unknown type, empty encoding */ smartDialogData;
    void /* unknown type, empty encoding */ hostingController;
    void /* unknown type, empty encoding */ smartDialogInteractionManager;
    void /* unknown type, empty encoding */ delegate;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ popoverViewController;
@property (nonatomic) void /* unknown type, empty encoding */ allowDrillingInAndOut;
@property (nonatomic, readonly) BOOL shouldBeHidden;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (id)view;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setIsInAmbient:(BOOL)a0;
- (void)setInteractionDelegate:(id)a0;
- (void)triggerSmartDialogAnimationWithDelay:(double)a0;
- (void)updateWithSnippetFrameInGlobal:(id)a0;
- (void)updateBodyWithText:(id)a0;
- (void)updateHeaderWithText:(id)a0 color:(id)a1;
- (void)updateWithSmartDialogCard:(id)a0;
- (void)updateWithSmartDialogPluginView:(id)a0;

@end
