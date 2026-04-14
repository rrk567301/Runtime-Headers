@interface SCRAppleScriptVOCursor : NSObject

- (id)bounds;
- (void)setVisible:(id)a0;
- (id)visible;
- (id)objectSpecifier;
- (id)magnification;
- (void)setMagnification:(id)a0;
- (void)appleScriptHandlePerformAction:(id)a0;
- (id)textUnderCursor;
- (id)appleScriptHandleGrabScreenshot:(id)a0;
- (void)appleScriptHandleMove:(id)a0;
- (void)appleScriptHandleSelect:(id)a0;

@end
