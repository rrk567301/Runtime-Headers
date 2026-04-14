@class NSArray, NSString;
@protocol UIFocusEnvironment, UIFocusItemContainer, UICoordinateSpace;

@interface _UIFocusContainerGuideFallbackItemsContainer : NSObject <UIFocusEnvironment, UIFocusItemContainer>

@property (readonly, weak, nonatomic) id<UIFocusEnvironment> parentFocusEnvironment;
@property (readonly, nonatomic) NSArray *childItems;
@property (readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property (readonly, nonatomic) id<UIFocusItemContainer> focusItemContainer;
@property (readonly, copy, nonatomic) NSString *focusGroupIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<UICoordinateSpace> coordinateSpace;

- (id)focusItemsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)shouldUpdateFocusInContext:(id)a0;
- (void).cxx_destruct;
- (void)didUpdateFocusInContext:(id)a0;
- (void)setNeedsFocusUpdate;
- (void)updateFocusIfNeeded;
- (id)initWithParentEnvironment:(id)a0 childItems:(id)a1;

@end
