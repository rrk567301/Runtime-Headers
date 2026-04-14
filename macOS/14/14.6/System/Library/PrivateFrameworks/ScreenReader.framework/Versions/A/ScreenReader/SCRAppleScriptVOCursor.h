@interface SCRAppleScriptVOCursor : NSObject

- (id)objectSpecifier;
- (id)visible;
- (id)bounds;
- (id)magnification;
- (void)setMagnification:(id)a0;
- (void)setVisible:(id)a0;
- (void)appleScriptHandlePerformAction:(id)a0;
- (id)textUnderCursor;
- (id)appleScriptHandleGrabScreenshot:(id)a0;
- (void)appleScriptHandleMove:(id)a0;
- (void)appleScriptHandleSelect:(id)a0;

@end
