@class NSString, NSClipView;
@protocol UICoordinateSpace;

@interface NSClipViewFocusProxy : NSViewFocusProxy <UIFocusItemScrollableContainer>

@property (readonly, weak) NSClipView *clipView;
@property (nonatomic) struct CGPoint { double x0; double x1; } contentOffset;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } contentSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } visibleSize;
@property (readonly, nonatomic) id<UICoordinateSpace> coordinateSpace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)_pageScrollDistance:(unsigned long long)a0;
- (BOOL)scrollHeading:(unsigned long long)a0;
- (struct CGPoint { double x0; double x1; })targetScrollOffset:(unsigned long long)a0;

@end
