@interface SCRAppleScriptVOCursor : NSObject

- (void)setVisible:(id)a0;
- (id)visible;
- (id)bounds;
- (id)objectSpecifier;
- (id)magnification;
- (void)setMagnification:(id)a0;
- (id)textUnderCursor;
- (void)appleScriptHandlePerformAction:(id)a0;
- (id)appleScriptHandleGrabScreenshot:(id)a0;
- (void)appleScriptHandleMove:(id)a0;
- (void)appleScriptHandleSelect:(id)a0;

@end
