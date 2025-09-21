@class _UIHostedFocusSystemDelegateProxy, _UIHostedFocusSystemItemContainer;
@protocol UIFocusEnvironment, _UIHostedFocusSystemDelegate;

@interface _UIHostedFocusSystem : UIFocusSystem

@property (readonly, nonatomic) _UIHostedFocusSystemItemContainer *itemContainerProxy;
@property (retain, nonatomic) _UIHostedFocusSystemDelegateProxy *delegateProxy;
@property (readonly, weak, nonatomic) id<UIFocusEnvironment> hostEnvironment;
@property (weak, nonatomic) id<_UIHostedFocusSystemDelegate> delegate;

- (id)behavior;
- (BOOL)_isEligibleForFocusOcclusion;
- (BOOL)_isEligibleForFocusInteraction;
- (void).cxx_destruct;
- (id)focusItemContainer;
- (BOOL)containsChildOfHostEnvironment:(id)a0;
- (BOOL)_focusSystemIsValid;
- (id)_hostFocusSystem;
- (id)_initWithHostEnvironment:(id)a0;
- (BOOL)_postsFocusUpdateNotifications;
- (BOOL)_prefersDeferralForFocusUpdateInContext:(id)a0;

@end
