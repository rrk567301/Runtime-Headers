@interface UnifiedTabBarCompactLayout : UnifiedTabBarLayout {
    unsigned long long _numberOfUnpinnedInactiveTabs;
    unsigned long long _numberOfUnpinnedInactiveInterTabButtonSpacings;
    double _cumulativeInterUnpinnedTabButtonSpacing;
    double _totalExtraInterTabBarButtonSpacingForUnpinnedActiveTab;
    double _unpinnedActiveTabButtonWidth;
}

- (void)prepareLayout;
- (double)_computePinnedTabBarButtonWidth;
- (double)_computeUnpinnedTabContentWidth;
- (long long)_activeButtonStateWhenPinned;
- (void)_calculateMainTabMetrics;
- (void)_calculateUnpinnedTabMetrics;
- (double)_computeExtraInterTabBarButtonSpacingForActiveTab;
- (double)_computeInterTabBarButtonSpacing;
- (double)_computeMaximumActiveTabButtonWidth;
- (double)_computeMaximumTabBarButtonWidth;
- (double)_computeMinimumActiveTabButtonWidth;
- (double)_computeMinimumSmallTabBarButtonWidth;
- (double)_computeMinimumWidthNeededToDisplayNumberOfUnpinnedTabs:(unsigned long long)a0;
- (double)_tabDensityFactor;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForContainerWithIdentifier:(id)a0;
- (id)visibleContainerIdentifiers;
- (id)visibleTabBarItems;

@end
