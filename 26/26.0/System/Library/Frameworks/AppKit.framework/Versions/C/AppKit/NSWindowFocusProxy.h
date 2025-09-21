@class NSString, NSArray, NSKeyValueDependencyInfo, NSWindow;
@protocol UIFocusEnvironment, UIFocusItemContainer, UICoordinateSpace;

@interface NSWindowFocusProxy : NSObject <NSDynamicPropertyContainer, UIFocusEnvironment, UICoordinateSpace, NSAppKitFocusItemContainer>

@property (readonly) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } flipTransform;
@property (readonly) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } unflipTransform;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } windowBounds;
@property (readonly, weak) NSWindow *window;
@property (retain) NSKeyValueDependencyInfo *dependencyInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property (readonly, weak, nonatomic) id<UIFocusEnvironment> parentFocusEnvironment;
@property (readonly, nonatomic) id<UIFocusItemContainer> focusItemContainer;
@property (readonly, copy, nonatomic) NSString *focusGroupIdentifier;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (readonly, getter=isLayoutContainer) BOOL layoutContainer;
@property (readonly, getter=isBarContainer) BOOL barContainer;
@property (readonly) NSArray *_allFocusItems;
@property (readonly) NSArray *_leafFocusItems;
@property (readonly) NSArray *_childFocusItems;
@property (readonly, nonatomic) id<UICoordinateSpace> coordinateSpace;

+ (BOOL)automaticallyTracksDependenciesOnValueForKey:(id)a0;

- (id)focusItemsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)shouldUpdateFocusInContext:(id)a0;
- (id)initWithWindow:(id)a0;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 fromCoordinateSpace:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toCoordinateSpace:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromCoordinateSpace:(id)a1;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 toCoordinateSpace:(id)a1;
- (void).cxx_destruct;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })computedFlipTransform;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })computedUnflipTransform;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })computedWindowBounds;
- (void)didUpdateFocusInContext:(id)a0;
- (struct CGPoint { double x0; double x1; })flipPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })flipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setNeedsFocusUpdate;
- (void)updateFocusIfNeeded;

@end
