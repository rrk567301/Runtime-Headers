@class NSString;

@interface NSAppKitFocusBehavior : NSObject <_UIFocusBehavior>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)disablesFocusabilityForItemsContainingFocus;
- (unsigned long long)focusGroupMovementBehavior;
- (long long)focusDeferral;
- (BOOL)shouldUseAccessibilityCompareForFocusGroupsInExternallyPlacedWindows;
- (long long)focusCastingMode;
- (BOOL)wantsTreeLocking;
- (BOOL)supportsClipToBounds;
- (BOOL)treatFirstAndLastHeadingsAsGlobal;
- (unsigned long long)focusGroupContainmentBehavior;
- (BOOL)throttlesProgrammaticFocusUpdates;
- (BOOL)cachesPreferredEnvironmentEnumerationResults;
- (BOOL)waitForFocusMovementActionToEnableFocusSystem;
- (BOOL)shouldUseAccessibilityCompareForItemGeometry;
- (BOOL)modernFocusedItemGetterBehavior;
- (BOOL)isContainerEligibleForFocusUpdateSearchRoot:(id)a0;
- (BOOL)legacyIsTransparentFocusRegionSupported;
- (double)stabilizedLinearFocusMovementTimeout;

@end
