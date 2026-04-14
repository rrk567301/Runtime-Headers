@class NSTextField, NSArray, NSDictionary, NSMutableString, SMWelcomeController, NSTreeController;

@interface SMSummaryViewController : NSViewController

@property (retain) NSDictionary *titleAttributes;
@property (retain) NSDictionary *subTitleAttributes;
@property (retain) NSDictionary *descriptionAttributes;
@property (retain) SMWelcomeController *parentController;
@property unsigned long long paneID;
@property (retain) NSTreeController *treeController;
@property (weak) NSTextField *relocatedItemsDescription;
@property (retain) NSMutableString *paneStory;
@property (retain) NSArray *contentNodes;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)viewWillAppear;
- (void)viewDidAppear;
- (id)localizedStringForKey:(id)a0;
- (id)initWithParentController:(id)a0;
- (void)generateAlertsTree;
- (void)generateWarningsTree;
- (void)generateErrorsTreeForAlerts:(BOOL)a0;
- (id)getDescriptionForError:(id)a0;
- (void)generateIncompatibleAppsTree;
- (id)extractIncompatibleAppInfo;
- (void)setupForTestCases;

@end
