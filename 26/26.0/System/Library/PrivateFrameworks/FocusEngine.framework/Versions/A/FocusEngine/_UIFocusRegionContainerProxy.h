@class _UIFocusEnvironmentContainerTuple, NSArray, NSString;
@protocol UIFocusEnvironment, UIFocusItemContainer;

@interface _UIFocusRegionContainerProxy : NSObject <_UIFocusRegionContainer>

@property (retain, nonatomic) _UIFocusEnvironmentContainerTuple *environmentContainer;
@property (nonatomic) BOOL allowsLazyLoading;
@property (nonatomic) BOOL shouldCreateRegionForOwningItem;
@property (nonatomic) BOOL shouldCreateRegionForGuideBehavior;
@property (readonly, nonatomic) id<UIFocusEnvironment> owningEnvironment;
@property (readonly, nonatomic, getter=_isFocusDirectionFlippedHorizontally) BOOL focusDirectionFlippedHorizontally;
@property (readonly, nonatomic, getter=_isEligibleForFocusInteraction) BOOL eligibleForFocusInteraction;
@property (readonly, nonatomic, getter=_isEligibleForFocusOcclusion) BOOL eligibleForFocusOcclusion;
@property (readonly, nonatomic, getter=_preferredFocusMovementStyle) long long preferredFocusMovementStyle;
@property (readonly, copy, nonatomic, getter=_linearFocusMovementSequences) NSArray *linearFocusMovementSequences;
@property (readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property (readonly, weak, nonatomic) id<UIFocusEnvironment> parentFocusEnvironment;
@property (readonly, nonatomic) id<UIFocusItemContainer> focusItemContainer;
@property (readonly, copy, nonatomic) NSString *focusGroupIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_didUpdateFocusInContext:(id)a0;
- (BOOL)shouldUpdateFocusInContext:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)didUpdateFocusInContext:(id)a0;
- (void)setNeedsFocusUpdate;
- (void)updateFocusIfNeeded;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_clippingRectInCoordinateSpace:(id)a0;
- (id)_focusSystem;
- (id)_itemContainer;
- (id)_preferredFocusRegionCoordinateSpace;
- (void)_searchForFocusRegionsInContext:(id)a0;
- (BOOL)_ui_isUIFocusRegionContainerProxy;
- (id)initWithEnvironmentContainer:(id)a0;
- (id)initWithOwningEnvironment:(id)a0 itemContainer:(id)a1;

@end
