@class UAScrollZoomSheet, NSWindow, NSWindowController;

@interface UAScrollZoomSheetController : NSObject {
    NSWindow *HostWindow;
    UAScrollZoomSheet *_scrollZoomSheet;
    char _hideModifiersEditor;
    char _hideScrollZoomCheckbox;
    NSWindowController *_zoomWindowController;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)beginSheetOnWindow:(id)a0 completionHandler:(id /* block */)a1;
- (void)displaySheet:(id)a0;
- (void)modifiersEditorSetHidden:(char)a0;
- (void)scrollZoomCheckboxSetHidden:(char)a0;

@end
