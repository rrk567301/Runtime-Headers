@interface UnifiedTabBarCompactLayout : UnifiedTabBarLayout {
    unsigned long long _numberOfUnpinnedInactiveTabs;
    unsigned long long _numberOfUnpinnedInactiveInterTabButtonSpacings;
    double _minimumActiveTabButtonWidth;
    double _cumulativeInterUnpinnedTabButtonSpacing;
    double _totalExtraInterTabBarButtonSpacingForUnpinnedActiveTab;
    double _unpinnedActiveTabButtonWidth;
}

- (void)_calculateMainTabMetrics;
- (void)_calculateUnpinnedTabMetrics;
- (double)_computePinnedTabRegionWidthForNumberOfPinnedTabs:(unsigned long long)a0;
- (double)_computeMinimumWidthNeededToDisplayNumberOfUnpinnedTabs:(unsigned long long)a0;
- (double)_computeExtraInterTabBarButtonSpacingForActiveTab;
- (double)_computeUnpinnedTabContentWidth;
- (double)_computeMinimumActiveTabButtonWidth;
- (double)_computeMaximumActiveTabButtonWidth;

@end
