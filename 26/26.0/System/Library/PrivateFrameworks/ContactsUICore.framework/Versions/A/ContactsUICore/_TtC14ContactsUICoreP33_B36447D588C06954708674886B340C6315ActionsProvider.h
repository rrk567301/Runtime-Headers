@class CNUIGKGameCenterFriendPlayerViewWrapper;
@protocol CNUICoreParentContainerProvider;

@interface _TtC14ContactsUICoreP33_B36447D588C06954708674886B340C6315ActionsProvider : NSObject <CNUIContactCardActionsProvider>

@property (nonatomic, retain) id<CNUICoreParentContainerProvider> containerProvider;
@property (nonatomic, retain) CNUIGKGameCenterFriendPlayerViewWrapper *gameCenterPlayerViewWrapper;
@property (nonatomic) BOOL shouldShowInlineActions;

- (id)init;
- (void)addObserver:(id)a0;
- (void).cxx_destruct;
- (id)parentGroups;
- (BOOL)supportsAction:(long long)a0;
- (void)didSelectActionItem:(id)a0 actionType:(long long)a1;
- (id)defaultActionForActionType:(long long)a0;
- (void)didSelectPreferredChannel:(id)a0;
- (id)menuItemsForAction:(long long)a0;
- (void)performAction:(long long)a0 forContactIdentifier:(id)a1 sourceView:(id)a2;
- (BOOL)shouldPerformDefaultActionForPropertyKey:(id)a0 propertyIdentifier:(id)a1;

@end
