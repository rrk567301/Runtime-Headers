@class NSString, CNUIUserActionListDataSource, CNContactActionsView;
@protocol CNContactActionsObserver, CNUIUserActionContext, CNContactActionsViewControllerDelegate;

@interface CNContactActionsViewController : NSViewController <CNUIUserActionListConsumerDelegate, CNContactActionsViewDelegate, CNContactCardWidget>

@property (retain, nonatomic) CNContactActionsView *contactActionsView;
@property (retain, nonatomic) id<CNUIUserActionContext> actionContext;
@property (weak, nonatomic) id<CNContactActionsViewControllerDelegate> delegate;
@property (nonatomic) long long quickActionViewStyle;
@property (retain, nonatomic) CNUIUserActionListDataSource *userActionListDataSource;
@property (weak, nonatomic) id<CNContactActionsObserver> observer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)mouseUp:(id)a0;
- (void)viewDidLoad;
- (void)setContact:(id)a0;
- (BOOL)commitEditingAndReturnError:(id *)a0;
- (id)defaultActionForActionType:(id)a0;
- (void)cardCommitEditing;
- (void)consumer:(id)a0 didSelectAction:(id)a1;
- (void)contactActionsView:(id)a0 didSelectActionFromDisambiguationUI:(id)a1;
- (void)contactActionsView:(id)a0 willPresentDisambiguationUIForActionType:(id)a1;
- (void)contactActionsViewDidUpdateModel:(id)a0;
- (double)customSpacingAfterWidget;
- (double)desiredHeight;
- (void)didSelectAction:(id)a0;
- (id)getQuickActionsMenusByActionType;
- (void)notifyDelegateOfSelectedActionType:(id)a0 fromDisambiguation:(BOOL)a1;
- (BOOL)shouldBeIncludedInKeyViewLoop;

@end
