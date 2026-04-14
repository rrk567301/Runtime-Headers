@class NSView;

@interface GFStringEditorWindow : NSWindow {
    NSView *_editingView;
}

- (BOOL)canBecomeKeyWindow;
- (void)sendEvent:(id)a0;
- (struct CGSize { double x0; double x1; })size;
- (void)dealloc;
- (void)setSize:(struct CGSize { double x0; double x1; })a0;
- (id)init;
- (void)setEditingView:(id)a0;
- (id)editingView;

@end
