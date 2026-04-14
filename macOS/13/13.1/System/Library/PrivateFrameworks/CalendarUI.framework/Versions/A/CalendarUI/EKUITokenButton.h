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

- (void).cxx_destruct;
- (id)attributedTitle;
- (void)mouseDown:(id)a0;
- (BOOL)acceptsFirstResponder;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)rightMouseDown:(id)a0;
- (void)updateConstraints;
- (void)keyDown:(id)a0;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)mouseUp:(id)a0;
- (void)updateTrackingAreas;
- (id)initWithViewController:(id)a0;
- (id)attributedSubtitle;
- (void)updateContent;
- (id)contentTextAttributes;
- (id)subtitleTextAttributes;
- (id)caretString;
- (id)titleForRepresentedObject;
- (id)subtitleForRepresentedObject;
- (id)iconForRepresentedObject;
- (id)menuForRepresentedObject;

@end
