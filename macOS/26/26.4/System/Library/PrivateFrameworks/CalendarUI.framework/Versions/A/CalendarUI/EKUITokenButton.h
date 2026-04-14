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

- (BOOL)resignFirstResponder;
- (void)updateContent;
- (void)mouseUp:(id)a0;
- (BOOL)becomeFirstResponder;
- (id)subtitleTextAttributes;
- (BOOL)acceptsFirstResponder;
- (void)keyDown:(id)a0;
- (void)mouseEntered:(id)a0;
- (id)initWithViewController:(id)a0;
- (void)mouseExited:(id)a0;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)mouseDown:(id)a0;
- (id)attributedSubtitle;
- (void)updateTrackingAreas;
- (id)attributedTitle;
- (void)rightMouseDown:(id)a0;
- (id)caretString;
- (id)contentTextAttributes;
- (id)iconForRepresentedObject;
- (id)menuForRepresentedObject;
- (id)subtitleForRepresentedObject;
- (id)titleForRepresentedObject;

@end
