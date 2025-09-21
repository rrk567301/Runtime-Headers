@class NSString, PXStoryViewModel, NSAccessibilityElement;

@interface PXStoryViewAccessibilityHUDContentProvider : NSObject <PXStoryDiagnosticHUDContentProvider> {
    PXStoryViewModel *_viewModel;
    char _attached;
    char _cachedStringNeedsUpdate;
    NSString *_cachedDisplayString;
    NSAccessibilityElement *_currentFocusedAccessibilityElement;
    NSAccessibilityElement *_previousFocusedAccessibilityElement;
}

- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (id)_diagnosticText;
- (void)_appendDescriptionOfChildrenOf:(id)a0 to:(id)a1;
- (void)_attachToAccessibility;
- (id)_axGroupParentOfElement:(id)a0;
- (void)_elementDidUpdate:(id)a0;
- (id)_fullHudStringForElement:(id)a0;
- (id)_hudStringForElement:(id)a0 includeAddresses:(char)a1 includeImportantDetails:(char)a2 includeGeometry:(char)a3 shortenInitialPrefix:(char)a4;
- (char)_isSafeToUpdateDebugString;
- (char)_recur_checkGroupAndSubgroupsForNeedsVersionUpdate:(id)a0;
- (id)_shortRectString:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)attachToAccessibilityIfNeeded;
- (id)diagnosticErrorsByComponentForHUDType:(long long)a0;
- (id)diagnosticTextForHUDType:(long long)a0 displaySize:(struct CGSize { double x0; double x1; })a1;

@end
