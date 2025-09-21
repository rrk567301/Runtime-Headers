@interface SCRSystemPreferencesScrollArea : SCRScrollArea {
    unsigned char _cachedIsSidebarContentScrollArea;
    unsigned char _cachedIsCompletelyTransparent;
}

- (id)typeDescription;
- (id)title;
- (char)_isCompletelyTransparent;
- (char)_isSidebarContentScrollArea;
- (id)descriptionForContextualHelp;
- (id)drillOutInstruction;
- (char)groupBehaviorIsAutoDrill;
- (id)initWithUIElement:(id)a0 parent:(id)a1;
- (char)shouldAutoFocusOnChildren;

@end
