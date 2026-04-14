@class NSString, CNUIUserActionListDataSource, CNContactActionsView;
@protocol CNUIUserActionContext;

@interface CNContactActionsViewController : NSViewController <CNUIUserActionListConsumerDelegate, CNContactCardWidget>

@property (retain, nonatomic) CNContactActionsView *contactActionsView;
@property (retain, nonatomic) id<CNUIUserActionContext> actionContext;
@property (retain, nonatomic) CNUIUserActionListDataSource *userActionListDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (BOOL)commitEditingAndReturnError:(id *)a0;
- (void)mouseUp:(id)a0;
- (void)viewDidLoad;
- (void)setContact:(id)a0;
- (double)desiredHeight;
- (BOOL)shouldBeIncludedInKeyViewLoop;
- (double)customSpacingAfterWidget;
- (void)consumer:(id)a0 didSelectAction:(id)a1;
- (void)cardCommitEditing;

@end
