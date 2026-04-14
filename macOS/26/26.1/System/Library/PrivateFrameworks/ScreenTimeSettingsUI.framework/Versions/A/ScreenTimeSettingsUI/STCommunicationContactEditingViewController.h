@class STCoreUsersController, NSString, NSView, CNFamilyMemberWhitelistedContactsViewController;

@interface STCommunicationContactEditingViewController : NSViewController

@property (retain) NSView *contactViewContainer;
@property (readonly, copy, nonatomic) NSString *topDescription;
@property (readonly, nonatomic) BOOL inCloudFamily;
@property (retain) STCoreUsersController *representedObject;
@property (retain) CNFamilyMemberWhitelistedContactsViewController *contactEditingViewController;

+ (id)keyPathsForValuesAffectingInCloudFamily;
+ (id)keyPathsForValuesAffectingTopDescription;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)clickCancelButton:(id)a0;
- (void)clickDoneButton:(id)a0;

@end
