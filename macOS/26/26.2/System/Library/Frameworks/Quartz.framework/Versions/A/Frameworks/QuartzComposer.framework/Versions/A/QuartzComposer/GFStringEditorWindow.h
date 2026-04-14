@class NSView;

@interface GFStringEditorWindow : NSWindow {
    NSView *_editingView;
}

- (void)sendEvent:(id)a0;
- (void)setSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)canBecomeKeyWindow;
- (struct CGSize { double x0; double x1; })size;
- (id)init;
- (void)dealloc;
- (void)setEditingView:(id)a0;
- (id)editingView;

@end
