@interface Feedback.FBKFeedbackDraftViewController : NSViewController <Feedback.FeedbackClientProtocol, NSWindowDelegate, _EXHostViewControllerDelegate, _EXQueryObserverDelegate> {
    void /* unknown type, empty encoding */ isAuthenticated;
    void /* unknown type, empty encoding */ isMinimized;
    void /* unknown type, empty encoding */ showsCompletionPage;
    void /* unknown type, empty encoding */ hostViewController;
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ response;
    void /* unknown type, empty encoding */ _xpcConnection;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ form;
    void /* unknown type, empty encoding */ extensionObserver;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } preferredMinimumSize;

- (BOOL)windowShouldClose:(id)a0;
- (void)windowWillClose:(id)a0;
- (void)viewDidDisappear;
- (void)closeWindow;
- (void)observerDidUpdate:(id)a0;
- (void)hostViewController:(id)a0 didPrepareToHost:(id)a1;
- (void)hostViewController:(id)a0 didBeginHosting:(id)a1;
- (void)hostViewController:(id)a0 didEndHosting:(id)a1 error:(id)a2;
- (void)draftDirtyStateUpdated:(BOOL)a0;
- (void)feedbackDidBeginSubmission;
- (void)feedbackDidCompleteWithResponseType:(long long)a0 responseID:(id)a1 completedForm:(id)a2;
- (void)didFailSubmissionWithError:(id)a0;
- (void)feedbackDidFailToAttachURL:(id)a0 nsError:(id)a1;
- (void)feedbackRestartDidFailWithError:(id)a0;
- (void)userAuthenticatedStatusChanged:(BOOL)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)viewWillAppear;
- (void)viewDidAppear;

@end
