@class _UIHostedFocusSystem, NSString;
@protocol UICoordinateSpace;

@interface _UIHostedFocusSystemItemContainer : NSObject <UIFocusItemContainer>

@property (weak, nonatomic) _UIHostedFocusSystem *focusSystem;
@property (readonly, nonatomic) id<UICoordinateSpace> coordinateSpace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)focusItemsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithHostedFocusSystem:(id)a0;

@end
