@class WebTextInputPanel;

@interface WebTextInputWindowController : NSObject {
    WebTextInputPanel *_panel;
}

+ (id)sharedTextInputWindowController;

- (id)init;
- (id)inputContext;
- (BOOL)interpretKeyEvent:(id)a0 string:(id *)a1;

@end
