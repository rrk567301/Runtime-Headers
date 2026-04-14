@interface UnifiedTabBarCompactLayout : UnifiedTabBarLayout {
    unsigned long long _numberOfUnpinnedInactiveTabs;
    unsigned long long _numberOfUnpinnedInactiveInterTabButtonSpacings;
    double _minimumActiveTabButtonWidth;
    double _cumulativeInterUnpinnedTabButtonSpacing;
    double _totalExtraInterTabBarButtonSpacingForUnpinnedActiveTab;
    double _unpinnedActiveTabButtonWidth;
}

- (void)_calculateUnpinnedTabMetrics;
- (void)_calculateMainTabMetrics;
- (double)_computePinnedTabRegionWidthForNumberOfPinnedTabs:(unsigned long long)a0;
- (double)_computeMinimumWidthNeededToDisplayNumberOfUnpinnedTabs:(unsigned long long)a0;
- (double)_computeMinimumActiveTabButtonWidth;
- (double)_computeExtraInterTabBarButtonSpacingForActiveTab;
- (double)_computeUnpinnedTabContentWidth;
- (double)_computeMaximumActiveTabButtonWidth;

@end
