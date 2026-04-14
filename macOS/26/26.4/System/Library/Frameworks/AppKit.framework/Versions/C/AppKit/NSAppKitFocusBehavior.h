@class NSString;

@interface NSAppKitFocusBehavior : NSObject <_UIFocusBehavior>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)waitForFocusMovementActionToEnableFocusSystem;
- (BOOL)supportsClipToBounds;
- (long long)focusCastingMode;
- (BOOL)shouldUseAccessibilityCompareForFocusGroupsInExternallyPlacedWindows;
- (BOOL)cachesPreferredEnvironmentEnumerationResults;
- (unsigned long long)focusGroupContainmentBehavior;
- (BOOL)treatFirstAndLastHeadingsAsGlobal;
- (BOOL)wantsTreeLocking;
- (BOOL)disablesFocusabilityForItemsContainingFocus;
- (BOOL)throttlesProgrammaticFocusUpdates;
- (BOOL)shouldUseAccessibilityCompareForItemGeometry;
- (unsigned long long)focusGroupMovementBehavior;
- (long long)focusDeferral;
- (BOOL)modernFocusedItemGetterBehavior;
- (BOOL)isContainerEligibleForFocusUpdateSearchRoot:(id)a0;
- (BOOL)legacyIsTransparentFocusRegionSupported;
- (double)stabilizedLinearFocusMovementTimeout;

@end
