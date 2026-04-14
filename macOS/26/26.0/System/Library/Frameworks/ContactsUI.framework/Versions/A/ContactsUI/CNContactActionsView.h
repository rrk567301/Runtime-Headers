@class NSMutableDictionary, CNUserDefaults, NSString, CNContact, NSStackView, NSMutableArray;
@protocol CNUIUserActionListDataSource, CNUIUserActionListConsumerDelegate, CNContactActionsViewDelegate, CNSchedulerProvider;

@interface CNContactActionsView : NSView <CNQuickActionViewClickHelperDelegate, CNUIUserActionListConsumer>

@property (weak, nonatomic) NSStackView *stackView;
@property (retain, nonatomic) NSMutableDictionary *clickHelpersByActionType;
@property (retain, nonatomic) NSMutableDictionary *quickActionViewsByActionType;
@property (retain, nonatomic) NSMutableArray *tokens;
@property (retain, nonatomic) id<CNSchedulerProvider> schedulerProvider;
@property (nonatomic) double cachedHeight;
@property (retain, nonatomic) CNUserDefaults *userDefaults;
@property (weak, nonatomic) id<CNUIUserActionListDataSource> dataSource;
@property (weak, nonatomic) id<CNUIUserActionListConsumerDelegate> delegate;
@property (weak, nonatomic) id<CNContactActionsViewDelegate> actionsViewDelegate;
@property (retain, nonatomic) NSString *contactIdentifier;
@property (retain, nonatomic) CNContact *contact;
@property (nonatomic) long long quickActionViewStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reloadData;
- (void)prepareForUpdates;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)layout;
- (void)cancelTokens;
- (void).cxx_destruct;
- (id)defaultActionForActionType:(id)a0;
- (void)reloadStackView;
- (void)didRightClickButton:(id)a0 actionType:(id)a1;
- (void)addClickHandlerToButton:(id)a0 actionType:(id)a1;
- (void)addRightClickHandlerToButton:(id)a0 actionType:(id)a1;
- (id)buttonImageForActionType:(id)a0;
- (double)desiredHeight;
- (void)didClickButton:(id)a0 actionType:(id)a1;
- (void)didDisambiguateActionType:(id)a0 withActionItem:(id)a1;
- (id)getQuickActionsMenusByActionType;
- (void)initStackView;
- (id)makeActionViewForActionTypeWithName:(id)a0;
- (void)resetQuickActionButtonsIfNecessary;
- (BOOL)shouldLookupQuickActionsForContactWithIdentifier:(id)a0;
- (void)updateCachedHeight;
- (void)updateQuickActionButtons;
- (void)updateQuickActionView:(id)a0 forActionType:(id)a1 withModel:(id)a2;

@end
