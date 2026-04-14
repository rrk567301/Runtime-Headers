@class WKTextInputPanel;

@interface WKTextInputWindowController : NSObject {
    WKTextInputPanel *_panel;
}

+ (id)sharedTextInputWindowController;

- (id)init;
- (BOOL)hasMarkedText;
- (void)unmarkText;
- (id)inputContext;
- (BOOL)interpretKeyEvent:(id)a0 usingLegacyCocoaTextInput:(BOOL)a1 string:(id *)a2;

@end
