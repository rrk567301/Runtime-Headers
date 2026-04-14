@class AssistantCalloutPopoverViewController, NSImageView, NSTextField;

@interface AssistantCalloutPopoverView : NSView {
    NSTextField *_title;
    NSImageView *_symbol;
}

@property (retain, nonatomic) AssistantCalloutPopoverViewController *controller;

- (void)setTitle:(id)a0;
- (void)viewDidMoveToWindow;
- (void)setSymbol:(id)a0;
- (void).cxx_destruct;
- (void)mouseDown:(id)a0;
- (id)init;

@end
