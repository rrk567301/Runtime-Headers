@class NSImageView, NSString, SUOSUMacBuddyController, NSProgressIndicator, SMWelcomeController, NSTextField, NSMutableString;

@interface SMUpdateController : NSViewController <SUOSUMacBuddyDelegate>

@property (retain) SUOSUMacBuddyController *suController;
@property (retain) SMWelcomeController *parentController;
@property unsigned long long paneID;
@property BOOL progressIsIndeterminate;
@property (retain) NSString *progressMessage;
@property (weak) NSImageView *imageView;
@property (weak) NSProgressIndicator *progressBar;
@property (weak) NSTextField *progressTitle;
@property (retain) NSMutableString *paneStory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)awakeFromNib;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)installDidBeginForUpdates:(id)a0 progress:(id)a1;
- (void)installDidFinishSuccessfullyForUpdates:(id)a0;
- (void)installDidFinishWithError:(id)a0 forUpdates:(id)a1;
- (id)initWithParentController:(id)a0;
- (void)exitingThisPane;
- (void)_prepareForInstall;
- (void)_unprepareForInstall;
- (void)presentFailureAlertForError:(id)a0;

@end
