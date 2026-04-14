@class NSNumber;

@interface SCRSystemPreferencesScrollArea : SCRScrollArea

@property (copy, nonatomic) NSNumber *cachedIsCompletelyTransparent;

- (void).cxx_destruct;
- (id)typeDescription;
- (BOOL)_isCompletelyTransparent;
- (BOOL)_isSidebarContentScrollArea;
- (id)descriptionForContextualHelp;
- (id)drillOutInstruction;
- (BOOL)groupBehaviorIsAutoDrill;
- (BOOL)shouldAutoFocusOnChildren;
- (id)titleDescription;

@end
