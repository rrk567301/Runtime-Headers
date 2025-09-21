@class NSMutableArray, NSCandidateBarCompositeCandidate, NSCandidateListViewController, NSTouch;

@interface _NSCandidateBarFunctionRowButton : NSButton <_NSCandidateBarFunctionRowSegment_AccessibilityDelegate> {
    NSMutableArray *_segments;
    NSMutableArray *_collapsedSegments;
    NSCandidateBarCompositeCandidate *_left;
    NSCandidateBarCompositeCandidate *_middle;
    NSCandidateBarCompositeCandidate *_right1;
    NSCandidateBarCompositeCandidate *_right2;
    NSCandidateBarCompositeCandidate *_right3;
    char _leftPressed;
    char _middlePressed;
    char _right1Pressed;
    char _right2Pressed;
    char _right3Pressed;
    char _hasCorrection;
    char _isComplex;
}

@property NSCandidateListViewController *controller;
@property (retain) NSTouch *trackingTouch;
@property double expandedWidth;
@property (getter=isCollapsed) char collapsed;
@property char allowsCollapsing;
@property char layoutDone;
@property char allowsCandidateVariation;
@property (readonly) char hasContent;
@property (readonly) char hasSplitRight;

- (void)dealloc;
- (id)accessibilityChildrenAttribute;
- (char)accessibilityIsIgnored;
- (id)accessibilityRoleAttribute;
- (id)collapsedAttributes;
- (id)collapsedCandidate;
- (id)collapsedSegmentWithWidth:(double)a0;
- (id)collapsingCandidate;
- (void)convertLocation:(struct CGPoint { double x0; double x1; })a0 toSegmentType:(long long *)a1 index:(unsigned long long *)a2;
- (id)defaultAttributesWithImage:(char)a0 multipleLines:(char)a1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSegments;
- (char)scaleRightCandidate;
- (id)scaledAttributes;
- (void)segmentAccessibilityPressed:(id)a0;
- (id)segments;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setLeft:(id)a0 isPressed:(char)a1;
- (void)setMiddle:(id)a0 isPressed:(char)a1 isCorrection:(char)a2;
- (void)setRight1:(id)a0 isPressed:(char)a1 right2:(id)a2 isPressed:(char)a3 right3:(id)a4 isPressed:(char)a5;
- (void)touchesBeganWithEvent:(id)a0;
- (void)touchesCancelledWithEvent:(id)a0;
- (void)touchesEndedWithEvent:(id)a0;
- (void)touchesMovedWithEvent:(id)a0;

@end
