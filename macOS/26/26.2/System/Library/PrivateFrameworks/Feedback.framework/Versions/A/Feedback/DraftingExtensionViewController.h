@interface DraftingExtensionViewController : NSViewController <NSWindowDelegate, Feedback.FeedbackExtensionProtocol> {
    void /* unknown type, empty encoding */ session;
    void /* unknown type, empty encoding */ xpcClient;
    void /* unknown type, empty encoding */ presentedDraftView;
    void /* unknown type, empty encoding */ form;
    void /* unknown type, empty encoding */ loadingView;
    void /* unknown type, empty encoding */ setFormCompletion;
    void /* unknown type, empty encoding */ showsCompletionPage;
    void /* unknown type, empty encoding */ instructionObserver;
    void /* unknown type, empty encoding */ $__lazy_storage_$_instructionsPanel;
    void /* unknown type, empty encoding */ appearanceObserver;
}

- (void)windowWillClose:(id)a0;
- (BOOL)windowShouldClose:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (id)initWithCoder:(id)a0;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)saveDocument:(id)a0;
- (void)deleteDraft;
- (void)invalidateServerSession;
- (void)saveDraftWithIsClosing:(BOOL)a0;
- (void)setFeedbackForm:(id)a0 reply:(id /* block */)a1;
- (void)setShowsCompletionPage:(BOOL)a0;

@end
