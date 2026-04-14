@class NSNumber;

@interface SCRSystemPreferencesScrollArea : SCRScrollArea

@property (copy, nonatomic) NSNumber *cachedIsCompletelyTransparent;

- (void).cxx_destruct;
- (id)typeDescription;
- (id)titleDescription;
- (BOOL)shouldAutoFocusOnChildren;
- (id)drillOutInstruction;
- (id)descriptionForContextualHelp;
- (BOOL)groupBehaviorIsAutoDrill;
- (BOOL)_isSidebarContentScrollArea;
- (BOOL)_isCompletelyTransparent;

@end
