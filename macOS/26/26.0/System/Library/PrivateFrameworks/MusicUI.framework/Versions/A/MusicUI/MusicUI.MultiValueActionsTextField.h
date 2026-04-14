@class NSColor;

@interface MusicUI.MultiValueActionsTextField : NSTextField {
    void /* unknown type, empty encoding */ underlinesTextOnHover;
    void /* unknown type, empty encoding */ axChildren;
    void /* unknown type, empty encoding */ links;
    void /* unknown type, empty encoding */ hasPerformedAction;
    void /* unknown type, empty encoding */ objectGraph;
    void /* unknown type, empty encoding */ defaultSeparatorString;
    void /* unknown type, empty encoding */ shouldTrackMouseEvents;
    void /* unknown type, empty encoding */ trackingArea;
    void /* unknown type, empty encoding */ hoverableRanges;
    void /* unknown type, empty encoding */ activeHoverableRange;
    void /* unknown type, empty encoding */ isHovered;
}

@property (nonatomic, retain) NSColor *textColor;

- (void)mouseUp:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (id)accessibilityChildren;
- (void)mouseMoved:(id)a0;

@end
