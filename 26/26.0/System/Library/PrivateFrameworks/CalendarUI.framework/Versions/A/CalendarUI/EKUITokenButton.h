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

- (id)attributedSubtitle;
- (void)mouseDown:(id)a0;
- (void)mouseUp:(id)a0;
- (id)attributedTitle;
- (void)updateContent;
- (id)subtitleTextAttributes;
- (void)keyDown:(id)a0;
- (BOOL)resignFirstResponder;
- (id)initWithViewController:(id)a0;
- (BOOL)becomeFirstResponder;
- (void)updateTrackingAreas;
- (void)updateConstraints;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void).cxx_destruct;
- (void)rightMouseDown:(id)a0;
- (BOOL)acceptsFirstResponder;
- (id)caretString;
- (id)contentTextAttributes;
- (id)iconForRepresentedObject;
- (id)menuForRepresentedObject;
- (id)subtitleForRepresentedObject;
- (id)titleForRepresentedObject;

@end
