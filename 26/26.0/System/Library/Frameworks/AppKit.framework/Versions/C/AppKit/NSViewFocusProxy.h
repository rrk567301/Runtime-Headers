@class NSString, NSView, NSArray, NSKeyValueDependencyInfo;
@protocol UIFocusEnvironment, UIFocusItemContainer, UICoordinateSpace;

@interface NSViewFocusProxy : NSObject <NSDynamicPropertyContainer, UICoordinateSpace, NSAppKitFocusItemContainer, UIFocusItem>

@property (readonly, weak) NSView *view;
@property (readonly, getter=isFlipped) BOOL flipped;
@property (readonly) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } flipTransform;
@property (readonly) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } unflipTransform;
@property (retain) NSKeyValueDependencyInfo *dependencyInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (readonly, getter=isLayoutContainer) BOOL layoutContainer;
@property (readonly, getter=isBarContainer) BOOL barContainer;
@property (readonly) NSArray *_allFocusItems;
@property (readonly) NSArray *_leafFocusItems;
@property (readonly) NSArray *_childFocusItems;
@property (readonly, nonatomic) id<UICoordinateSpace> coordinateSpace;
@property (readonly, nonatomic) BOOL canBecomeFocused;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (readonly, nonatomic) long long focusGroupPriority;
@property (readonly, nonatomic) long long focusItemDeferralMode;
@property (readonly, nonatomic) BOOL isTransparentFocusItem;
@property (readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property (readonly, weak, nonatomic) id<UIFocusEnvironment> parentFocusEnvironment;
@property (readonly, nonatomic) id<UIFocusItemContainer> focusItemContainer;
@property (readonly, copy, nonatomic) NSString *focusGroupIdentifier;

+ (BOOL)automaticallyTracksDependenciesOnValueForKey:(id)a0;

- (id)focusItemsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithView:(id)a0;
- (BOOL)shouldUpdateFocusInContext:(id)a0;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 fromCoordinateSpace:(id)a1;
- (BOOL)_isEligibleForFocusInteraction;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toCoordinateSpace:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromCoordinateSpace:(id)a1;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 toCoordinateSpace:(id)a1;
- (void).cxx_destruct;
- (unsigned long long)_focusGuideBehaviorForFocusMovement:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })computedFrame;
- (void)didUpdateFocusInContext:(id)a0;
- (struct CGPoint { double x0; double x1; })flipPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })flipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setNeedsFocusUpdate;
- (struct CGPoint { double x0; double x1; })unflipPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })unflipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateFocusIfNeeded;

@end
