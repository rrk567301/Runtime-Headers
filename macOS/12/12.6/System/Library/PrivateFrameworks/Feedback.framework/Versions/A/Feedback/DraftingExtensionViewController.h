@interface DraftingExtensionViewController : NSViewController <NSWindowDelegate, Feedback.FeedbackExtensionProtocol> {
    void /* unknown type, empty encoding */ session;
    void /* unknown type, empty encoding */ extensionController;
    void /* unknown type, empty encoding */ showsCompletionPage;
    void /* unknown type, empty encoding */ $__lazy_storage_$_instructionsPanel;
}

- (void)saveDocument:(id)a0;
- (BOOL)windowShouldClose:(id)a0;
- (void)windowWillClose:(id)a0;
- (void)setFeedbackForm:(id)a0 reply:(id /* block */)a1;
- (void)setShowsCompletionPage:(BOOL)a0;
- (void)saveDraftWithIsClosing:(BOOL)a0;
- (void)deleteDraft;
- (void)setHostAppIconImage:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)viewDidAppear;

@end
