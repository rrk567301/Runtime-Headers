@class NSTextView, SMWelcomeController, NSMutableString;

@interface SMSummaryViewController : NSViewController

@property (retain) SMWelcomeController *parentController;
@property unsigned long long paneID;
@property NSTextView *contentView;
@property (retain) NSMutableString *paneStory;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)viewWillAppear;
- (void)viewDidAppear;
- (id)localizedStringForKey:(id)a0;
- (id)initWithParentController:(id)a0;
- (id)extractIncompatibleAppInfo;

@end
