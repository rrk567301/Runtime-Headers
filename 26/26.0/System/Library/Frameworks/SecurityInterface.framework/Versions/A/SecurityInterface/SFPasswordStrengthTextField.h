@class SFPasswordAssistantInspectorController;

@interface SFPasswordStrengthTextField : NSTextField {
    SFPasswordAssistantInspectorController *_pwaInspector;
}

- (void)mouseDown:(id)a0;
- (void)dealloc;
- (void)resetCursorRects;
- (void)setInspector:(id)a0;

@end
