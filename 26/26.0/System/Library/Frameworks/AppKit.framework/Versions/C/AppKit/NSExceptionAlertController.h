@class NSString, NSView, NSLayoutConstraint, NSButton;

@interface NSExceptionAlertController : NSWindowController {
    struct CGSize { double width; double height; } _previousSize;
}

@property BOOL showingDetails;
@property (retain) NSView *expandedView;
@property (retain) NSButton *showDetailsButton;
@property (retain) NSLayoutConstraint *heightCollapseConstraint;
@property (copy) NSString *exceptionMessage;

- (void)windowDidLoad;
- (void)windowWillClose:(id)a0;
- (void)dealloc;
- (id)init;
- (struct CGSize { double x0; double x1; })windowWillResize:(id)a0 toSize:(struct CGSize { double x0; double x1; })a1;
- (long long)runModal;
- (void)btnClicked:(id)a0;
- (void)btnShowDetailsClicked:(id)a0;

@end
