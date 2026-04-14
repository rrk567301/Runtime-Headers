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

- (void)updateContent;
- (id)subtitleTextAttributes;
- (id)attributedTitle;
- (void)mouseUp:(id)a0;
- (void)mouseExited:(id)a0;
- (BOOL)becomeFirstResponder;
- (void)updateConstraints;
- (void)updateTrackingAreas;
- (void)mouseEntered:(id)a0;
- (BOOL)resignFirstResponder;
- (id)initWithViewController:(id)a0;
- (void).cxx_destruct;
- (BOOL)acceptsFirstResponder;
- (void)mouseDown:(id)a0;
- (void)keyDown:(id)a0;
- (id)attributedSubtitle;
- (void)rightMouseDown:(id)a0;
- (id)caretString;
- (id)contentTextAttributes;
- (id)iconForRepresentedObject;
- (id)menuForRepresentedObject;
- (id)subtitleForRepresentedObject;
- (id)titleForRepresentedObject;

@end
