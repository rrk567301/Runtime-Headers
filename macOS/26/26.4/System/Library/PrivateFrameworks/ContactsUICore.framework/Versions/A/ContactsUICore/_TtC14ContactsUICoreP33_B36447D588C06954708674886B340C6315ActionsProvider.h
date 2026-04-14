@class CNUIGKGameCenterFriendPlayerViewWrapper;
@protocol CNUICoreParentContainerProvider;

@interface _TtC14ContactsUICoreP33_B36447D588C06954708674886B340C6315ActionsProvider : NSObject <CNUIContactCardActionsProvider>

@property (nonatomic, retain) id<CNUICoreParentContainerProvider> containerProvider;
@property (nonatomic) BOOL allowsEditing;
@property (nonatomic) BOOL allowsActions;
@property (nonatomic, retain) CNUIGKGameCenterFriendPlayerViewWrapper *gameCenterPlayerViewWrapper;
@property (nonatomic) BOOL shouldShowInlineActions;

- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (id)init;
- (id)parentGroups;
- (void)didSelectActionItem:(id)a0 actionType:(long long)a1;
- (BOOL)supportsAction:(long long)a0;
- (void)didSetSensitiveContentOverride:(BOOL)a0;
- (id)defaultActionForActionType:(long long)a0;
- (void)didSelectPreferredChannel:(id)a0;
- (id)menuItemsForAction:(long long)a0;
- (void)performAction:(long long)a0 forContactIdentifier:(id)a1 sourceView:(id)a2;
- (BOOL)shouldPerformDefaultActionForPropertyKey:(id)a0 propertyIdentifier:(id)a1;

@end
