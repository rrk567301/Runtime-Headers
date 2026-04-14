@class NSTextField, NSView, SegmentedControlWithDynamicWidth, NSOutlineView, NSString, NSArray, NSPopUpButton, WBSFaviconRequestsController, NSLayoutConstraint, NSButton, NSSegmentedControl;

@interface ManagedWebGLPoliciesViewController : NSViewController <NSOutlineViewDataSource, OutlineViewPlusDelegate, NSMenuDelegate> {
    NSArray *_openWebPagePolicies;
    NSArray *_configuredPolicies;
    WBSFaviconRequestsController *_requestsController;
    BOOL _didAwakeFromNib;
}

@property (weak, nonatomic) NSButton *removeButton;
@property (weak, nonatomic) SegmentedControlWithDynamicWidth *removePolicySegmentedControl;
@property (weak, nonatomic) NSSegmentedControl *removeButtonSegmentedControl;
@property (weak, nonatomic) NSOutlineView *policyOutlineView;
@property (weak, nonatomic) NSView *policiesPlaceholderView;
@property (weak, nonatomic) NSPopUpButton *defaultPolicyPopUpButton;
@property (retain, nonatomic) NSView *warningContentView;
@property (retain, nonatomic) NSTextField *warningTextField;
@property (retain, nonatomic) NSLayoutConstraint *warningContentViewTopVerticalSpacingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *warningContentViewBottomVerticalSpacingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *warningContentViewLeadingHorizontalSpacingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *warningContentViewTrailingHorizontalSpacingConstraint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cautionImage;
+ (id)_blockPolicyString;
+ (id)_askPolicyString;
+ (id)_allowWithSecurityRestrictionsPolicyString;
+ (id)_allowNoSecurityRestrictionsPolicyString;
+ (id)_policyItems;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)menuNeedsUpdate:(id)a0;
- (void)menuDidClose:(id)a0;
- (void)awakeFromNib;
- (void)clear:(id)a0;
- (void)viewWillAppear;
- (void)viewWillDisappear;
- (long long)outlineView:(id)a0 numberOfChildrenOfItem:(id)a1;
- (id)outlineView:(id)a0 child:(long long)a1 ofItem:(id)a2;
- (BOOL)outlineView:(id)a0 isItemExpandable:(id)a1;
- (void)outlineViewSelectionDidChange:(id)a0;
- (double)outlineView:(id)a0 heightOfRowByItem:(id)a1;
- (id)outlineView:(id)a0 selectionIndexesForProposedSelection:(id)a1;
- (BOOL)outlineView:(id)a0 isGroupItem:(id)a1;
- (id)outlineView:(id)a0 viewForTableColumn:(id)a1 item:(id)a2;
- (BOOL)outlineView:(id)a0 shouldEditOnDoubleClick:(id)a1 inRow:(long long)a2 tableColumn:(id)a3;
- (BOOL)outlineView:(id)a0 shouldEditOnSingleClick:(id)a1 inRow:(long long)a2 tableColumn:(id)a3;
- (BOOL)outlineView:(id)a0 keyDown:(id)a1;
- (void)_didChangeManagedWebGLPolicies:(id)a0;
- (void)defaultPolicyDidChange:(id)a0;
- (void)policyDidChange:(id)a0;
- (void)_setCautionImageOnMenuItemsIfNeeded:(id)a0;
- (void)_setUpPolicyPopUpButtonIfNeeded:(id)a0;
- (void)_updateClearButtonState;
- (void)_setUpPolicies;
- (void)_setUpOutlineHeaderView;

@end
