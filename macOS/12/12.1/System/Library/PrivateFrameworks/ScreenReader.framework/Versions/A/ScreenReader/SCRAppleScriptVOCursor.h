@interface SCRAppleScriptVOCursor : NSObject

- (id)objectSpecifier;
- (id)bounds;
- (void)setVisible:(id)a0;
- (id)magnification;
- (void)setMagnification:(id)a0;
- (id)visible;
- (id)textUnderCursor;
- (void)appleScriptHandleMove:(id)a0;
- (id)appleScriptHandleGrabScreenshot:(id)a0;
- (void)appleScriptHandlePerformAction:(id)a0;
- (void)appleScriptHandleSelect:(id)a0;

@end
