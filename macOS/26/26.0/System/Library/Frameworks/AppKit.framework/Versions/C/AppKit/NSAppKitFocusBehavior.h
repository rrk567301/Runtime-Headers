@class NSString;

@interface NSAppKitFocusBehavior : NSObject <_UIFocusBehavior>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)wantsTreeLocking;
- (BOOL)shouldUseAccessibilityCompareForItemGeometry;
- (BOOL)disablesFocusabilityForItemsContainingFocus;
- (BOOL)waitForFocusMovementActionToEnableFocusSystem;
- (BOOL)supportsClipToBounds;
- (unsigned long long)focusGroupContainmentBehavior;
- (long long)focusCastingMode;
- (BOOL)shouldUseAccessibilityCompareForFocusGroupsInExternallyPlacedWindows;
- (BOOL)throttlesProgrammaticFocusUpdates;
- (BOOL)treatFirstAndLastHeadingsAsGlobal;
- (BOOL)cachesPreferredEnvironmentEnumerationResults;
- (long long)focusDeferral;
- (unsigned long long)focusGroupMovementBehavior;
- (BOOL)modernFocusedItemGetterBehavior;
- (BOOL)isContainerEligibleForFocusUpdateSearchRoot:(id)a0;
- (BOOL)legacyIsTransparentFocusRegionSupported;
- (double)stabilizedLinearFocusMovementTimeout;

@end
