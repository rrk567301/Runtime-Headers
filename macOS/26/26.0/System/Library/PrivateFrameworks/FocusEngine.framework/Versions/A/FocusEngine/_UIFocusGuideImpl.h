@class NSArray, NSString;
@protocol UIFocusEnvironment, UIFocusItemContainer, UIFocusItem, _UIFocusGuideImplDelegate;

@interface _UIFocusGuideImpl : NSObject <_UIFocusRegionContainer, _UIFocusGuideRegionDelegate, UIFocusItem> {
    struct { unsigned char isEnabled : 1; unsigned char isUnoccludable : 1; unsigned char isUnclippable : 1; unsigned char focusPriorityRequired : 1; unsigned char ignoresSpeedBumpEdges : 1; unsigned char didSetPreferredFocusedEnvironments : 1; unsigned char automaticallyPreferOwningItem : 1; unsigned char delegatePreferredEnvironmentsForHeading : 1; } _flags;
}

@property (readonly, nonatomic) id<_UIFocusGuideImplDelegate> delegate;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (copy, nonatomic) NSArray *preferredFocusEnvironments;
@property (nonatomic, setter=_setDidSetPreferredFocusedEnvironments:) BOOL _didSetPreferredFocusedEnvironments;
@property (nonatomic, setter=_setAutomaticallyPreferOwningItem:) BOOL _automaticallyPreferOwningItem;
@property (nonatomic) id<UIFocusItem> owningItem;
@property (nonatomic, setter=_setIsUnoccludable:) BOOL _isUnoccludable;
@property (nonatomic, setter=_setFocusPriorityRequired:) BOOL _focusPriorityRequired;
@property (nonatomic, setter=_setIgnoresSpeedBumpEdges:) BOOL _ignoresSpeedBumpEdges;
@property (nonatomic, setter=_setIsUnclippable:) BOOL _isUnclippable;
@property (readonly, nonatomic, getter=_isFocusDirectionFlippedHorizontally) BOOL focusDirectionFlippedHorizontally;
@property (readonly, nonatomic, getter=_isEligibleForFocusInteraction) BOOL eligibleForFocusInteraction;
@property (readonly, nonatomic, getter=_isEligibleForFocusOcclusion) BOOL eligibleForFocusOcclusion;
@property (readonly, nonatomic, getter=_preferredFocusMovementStyle) long long preferredFocusMovementStyle;
@property (readonly, copy, nonatomic, getter=_linearFocusMovementSequences) NSArray *linearFocusMovementSequences;
@property (readonly, weak, nonatomic) id<UIFocusEnvironment> parentFocusEnvironment;
@property (readonly, nonatomic) id<UIFocusItemContainer> focusItemContainer;
@property (readonly, copy, nonatomic) NSString *focusGroupIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<UIFocusItem> focusItemForSorting;
@property (readonly, nonatomic) BOOL canBecomeFocused;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (readonly, nonatomic) long long focusGroupPriority;
@property (readonly, nonatomic) long long focusItemDeferralMode;
@property (readonly, nonatomic) BOOL isTransparentFocusItem;

- (BOOL)_uili_isFocusGuide;
- (BOOL)shouldUpdateFocusInContext:(id)a0;
- (id)init;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)didUpdateFocusInContext:(id)a0;
- (void)setNeedsFocusUpdate;
- (void)updateFocusIfNeeded;
- (id)_preferredFocusRegionCoordinateSpace;
- (void)_searchForFocusRegionsInContext:(id)a0;
- (void)focusDidUpdateViaGuide;
- (id)focusGuideRegion:(id)a0 preferredFocusEnvironmentsForMovementRequest:(id)a1;
- (void)focusGuideRegion:(id)a0 willParticipateAsDestinationRegionInFocusUpdate:(id)a1;

@end
