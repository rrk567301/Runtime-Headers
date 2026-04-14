@class NSMutableDictionary, CNContactQuickActionsController, NUIContainerStackView, NSString;

@interface SearchUIInlineActionsViewController : SearchUIAccessoryViewController <CNContactQuickActionViewContainer, CNContactQuickActionsControllerDelegate>

@property (retain) NUIContainerStackView *view;
@property (retain) CNContactQuickActionsController *quickActionsController;
@property (retain) NSMutableDictionary *buttonsForActionTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsRowModel:(id)a0;
+ (id)buttonCategoriesForActionItem:(id)a0;
+ (id)contactForActionItem:(id)a0;
+ (id)symbolNameForCustomActionType:(id)a0;

- (void).cxx_destruct;
- (unsigned long long)type;
- (void)buttonPressed:(id)a0;
- (void)contactQuickActionsController:(id)a0 presentDisambiguationMenu:(id)a1 forActionType:(id)a2;
- (id)viewForActionType:(id)a0;
- (id)setupView;
- (void)updateWithRowModel:(id)a0;
- (void)updateWithContacts:(id)a0;
- (void)didPressButtonWithActionType:(id)a0;
- (void)didPerformContactActionOfType:(id)a0;

@end
