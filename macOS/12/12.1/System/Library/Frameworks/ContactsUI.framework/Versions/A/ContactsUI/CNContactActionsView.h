@class NSMutableDictionary, CNUserDefaults, NSString, CNContact, NSStackView, NSMutableArray;
@protocol CNSchedulerProvider, CNUIUserActionListDataSource, CNUIUserActionListConsumerDelegate;

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
@property (retain, nonatomic) NSString *contactIdentifier;
@property (retain, nonatomic) CNContact *contact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reloadData;
- (void)commonInit;
- (double)desiredHeight;
- (void)initStackView;
- (void)updateQuickActionButtons;
- (void)reloadStackView;
- (void)cancelTokens;
- (id)makeActionViewForActionTypeWithName:(id)a0;
- (void)prepareForUpdates;
- (BOOL)shouldLookupQuickActionsForContactWithIdentifier:(id)a0;
- (void)updateQuickActionView:(id)a0 forActionType:(id)a1 withModel:(id)a2;
- (void)resetQuickActionButtonsIfNecessary;
- (id)buttonImageForActionType:(id)a0;
- (void)addClickHandlerToButton:(id)a0 actionType:(id)a1;
- (void)addRightClickHandlerToButton:(id)a0 actionType:(id)a1;
- (void)didClickButton:(id)a0 actionType:(id)a1;
- (void)didRightClickButton:(id)a0 actionType:(id)a1;
- (void)updateCachedHeight;
- (void)didDisambiguateActionType:(id)a0 withActionItem:(id)a1;

@end
