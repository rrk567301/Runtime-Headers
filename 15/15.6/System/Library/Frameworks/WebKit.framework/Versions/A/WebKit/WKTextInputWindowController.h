@class WKTextInputPanel;

@interface WKTextInputWindowController : NSObject {
    WKTextInputPanel *_panel;
}

+ (id)sharedTextInputWindowController;

- (id)init;
- (char)hasMarkedText;
- (id)inputContext;
- (void)unmarkText;
- (char)interpretKeyEvent:(id)a0 usingLegacyCocoaTextInput:(char)a1 string:(id *)a2;

@end
