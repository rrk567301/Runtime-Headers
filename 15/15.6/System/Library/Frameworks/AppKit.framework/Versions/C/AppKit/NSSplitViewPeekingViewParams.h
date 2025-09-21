@class NSView, NSSplitViewDividerDragParams;

@interface NSSplitViewPeekingViewParams : NSObject

@property double originalWidth;
@property double minimumWidth;
@property unsigned long long dividerIndex;
@property char leadingEdge;
@property char snappedToPreferredThickness;
@property (weak) NSView *view;
@property (retain) NSSplitViewDividerDragParams *dividerDragParams;

- (void)dealloc;
- (void).cxx_destruct;

@end
