@interface UnifiedTabBarCompactLayout : UnifiedTabBarLayout {
    unsigned long long _numberOfUnpinnedInactiveTabs;
    unsigned long long _numberOfUnpinnedInactiveInterTabButtonSpacings;
    double _cumulativeInterUnpinnedTabButtonSpacing;
    double _totalExtraInterTabBarButtonSpacingForUnpinnedActiveTab;
    double _unpinnedActiveTabButtonWidth;
}

- (void)prepareLayout;
- (double)_computeUnpinnedTabContentWidth;
- (long long)_activeButtonStateWhenPinned;
- (void)_calculateMainTabMetrics;
- (void)_calculateUnpinnedTabMetrics;
- (double)_computeExtraInterTabBarButtonSpacingForActiveTab;
- (double)_computeInterTabBarButtonSpacing;
- (double)_computeMaximumActiveTabButtonWidth;
- (double)_computeMinimumActiveTabButtonWidth;
- (double)_computeMinimumSmallTabBarButtonWidth;
- (double)_computeMinimumWidthNeededToDisplayNumberOfUnpinnedTabs:(unsigned long long)a0;
- (double)_tabDensityFactor;
- (id)visibleTabBarItems;

@end
