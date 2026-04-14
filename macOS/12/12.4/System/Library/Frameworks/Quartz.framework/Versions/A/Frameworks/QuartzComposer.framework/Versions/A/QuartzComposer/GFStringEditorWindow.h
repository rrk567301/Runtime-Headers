@class NSView;

@interface GFStringEditorWindow : NSWindow {
    NSView *_editingView;
}

- (struct CGSize { double x0; double x1; })size;
- (void)dealloc;
- (id)init;
- (void)setSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)canBecomeKeyWindow;
- (void)sendEvent:(id)a0;
- (id)editingView;
- (void)setEditingView:(id)a0;

@end
