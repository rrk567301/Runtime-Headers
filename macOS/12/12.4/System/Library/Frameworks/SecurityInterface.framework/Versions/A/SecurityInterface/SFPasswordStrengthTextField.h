@class SFPasswordAssistantInspectorController;

@interface SFPasswordStrengthTextField : NSTextField {
    SFPasswordAssistantInspectorController *_pwaInspector;
}

- (void)dealloc;
- (void)resetCursorRects;
- (void)mouseDown:(id)a0;
- (void)setInspector:(id)a0;

@end
