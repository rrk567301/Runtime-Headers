@class NSView;

@interface GFStringEditorWindow : NSWindow {
    NSView *_editingView;
}

- (void)sendEvent:(id)a0;
- (BOOL)canBecomeKeyWindow;
- (void)setSize:(struct CGSize { double x0; double x1; })a0;
- (id)init;
- (struct CGSize { double x0; double x1; })size;
- (void)dealloc;
- (void)setEditingView:(id)a0;
- (id)editingView;

@end
