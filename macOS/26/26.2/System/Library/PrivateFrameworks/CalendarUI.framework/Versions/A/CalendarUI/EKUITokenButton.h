@class NSImageView, NSTextField, NSTrackingArea, EKViewController, NSMutableArray;

@interface EKUITokenButton : NSView {
    NSTextField *_label;
    NSTextField *_caret;
    NSTextField *_sublabel;
    NSImageView *_icon;
    NSTrackingArea *_trackingArea;
    BOOL _selected;
    EKViewController *_viewController;
    NSMutableArray *_constraints;
}

@property (retain, nonatomic) id representedObject;
@property (copy, nonatomic) id /* block */ executeAction;
@property (copy, nonatomic) id /* block */ deleteAction;

- (id)subtitleTextAttributes;
- (void)updateContent;
- (id)attributedTitle;
- (id)attributedSubtitle;
- (void)mouseEntered:(id)a0;
- (id)initWithViewController:(id)a0;
- (void)mouseDown:(id)a0;
- (void)mouseExited:(id)a0;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)mouseUp:(id)a0;
- (void)updateTrackingAreas;
- (BOOL)acceptsFirstResponder;
- (void)keyDown:(id)a0;
- (void)rightMouseDown:(id)a0;
- (id)caretString;
- (id)contentTextAttributes;
- (id)iconForRepresentedObject;
- (id)menuForRepresentedObject;
- (id)subtitleForRepresentedObject;
- (id)titleForRepresentedObject;

@end
