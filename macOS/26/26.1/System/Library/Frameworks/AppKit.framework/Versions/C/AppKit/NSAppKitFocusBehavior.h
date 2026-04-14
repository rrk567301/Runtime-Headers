@class NSString;

@interface NSAppKitFocusBehavior : NSObject <_UIFocusBehavior>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)focusGroupContainmentBehavior;
- (BOOL)shouldUseAccessibilityCompareForFocusGroupsInExternallyPlacedWindows;
- (BOOL)treatFirstAndLastHeadingsAsGlobal;
- (long long)focusCastingMode;
- (BOOL)waitForFocusMovementActionToEnableFocusSystem;
- (long long)focusDeferral;
- (BOOL)disablesFocusabilityForItemsContainingFocus;
- (BOOL)wantsTreeLocking;
- (BOOL)shouldUseAccessibilityCompareForItemGeometry;
- (unsigned long long)focusGroupMovementBehavior;
- (BOOL)throttlesProgrammaticFocusUpdates;
- (BOOL)supportsClipToBounds;
- (BOOL)cachesPreferredEnvironmentEnumerationResults;
- (BOOL)modernFocusedItemGetterBehavior;
- (BOOL)isContainerEligibleForFocusUpdateSearchRoot:(id)a0;
- (BOOL)legacyIsTransparentFocusRegionSupported;
- (double)stabilizedLinearFocusMovementTimeout;

@end
