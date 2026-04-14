@interface UnifiedTabBarSeparateLayout : UnifiedTabBarLayout {
    unsigned long long _numberOfUnpinnedInactiveTabs;
    unsigned long long _numberOfUnpinnedInactiveInterTabButtonSpacings;
}

- (double)_computePinnedTabBarButtonWidth;
- (void)_calculateMainTabMetrics;
- (void)_calculateUnpinnedTabMetrics;
- (double)_computeExtraInterTabBarButtonSpacingForActiveTab;
- (double)_computeInterTabBarButtonSpacing;
- (double)_computeMinimumActiveTabButtonWidth;
- (double)_computeMinimumWidthNeededToDisplayNumberOfUnpinnedTabs:(unsigned long long)a0;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })_tabBarContentPadding;
- (long long)activeButtonState;
- (BOOL)shouldShowPinnedTabSeparator;

@end
