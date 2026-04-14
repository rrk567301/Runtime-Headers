@interface UnifiedTabBarToolbarCustomizationLayout : UnifiedTabBarLayout

- (void)_calculateUnpinnedTabMetrics;
- (double)_computeMinimumActiveTabButtonWidth;
- (double)_computeMinimumSmallTabBarButtonWidth;
- (double)_computeMinimumWidthNeededToDisplayNumberOfUnpinnedTabs:(unsigned long long)a0;
- (long long)activeButtonState;

@end
