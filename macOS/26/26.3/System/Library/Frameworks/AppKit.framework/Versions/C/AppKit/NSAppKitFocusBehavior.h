@class NSString;

@interface NSAppKitFocusBehavior : NSObject <_UIFocusBehavior>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)wantsTreeLocking;
- (unsigned long long)focusGroupMovementBehavior;
- (BOOL)cachesPreferredEnvironmentEnumerationResults;
- (BOOL)supportsClipToBounds;
- (long long)focusCastingMode;
- (BOOL)shouldUseAccessibilityCompareForFocusGroupsInExternallyPlacedWindows;
- (BOOL)waitForFocusMovementActionToEnableFocusSystem;
- (long long)focusDeferral;
- (BOOL)disablesFocusabilityForItemsContainingFocus;
- (BOOL)shouldUseAccessibilityCompareForItemGeometry;
- (BOOL)throttlesProgrammaticFocusUpdates;
- (unsigned long long)focusGroupContainmentBehavior;
- (BOOL)treatFirstAndLastHeadingsAsGlobal;
- (BOOL)modernFocusedItemGetterBehavior;
- (BOOL)isContainerEligibleForFocusUpdateSearchRoot:(id)a0;
- (BOOL)legacyIsTransparentFocusRegionSupported;
- (double)stabilizedLinearFocusMovementTimeout;

@end
