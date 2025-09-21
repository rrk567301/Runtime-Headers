@class NSView, NSArray, NSLayoutConstraint;

@interface NSSplitViewDividerDragParams : NSObject {
    long long index;
    NSView *originalFocusedSubview;
    struct { double minPossiblePosition; double minAllowablePosition; double maxAllowablePosition; double maxPossiblePosition; char canCollapseBeforeView; char canCollapseAfterView; } staticDragLimits;
    NSLayoutConstraint *draggingConstraint;
    NSArray *neighboringViewConstraints;
    id draggingAnchor;
    char delegateDynamicallyConstrains;
    char userInteractiveDrag;
}

- (void)dealloc;
- (id)description;

@end
