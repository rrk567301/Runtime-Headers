@class NSView;

@interface GFStringEditorWindow : NSWindow {
    NSView *_editingView;
}

- (void)dealloc;
- (id)init;
- (struct CGSize { double x0; double x1; })size;
- (void)setSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)canBecomeKeyWindow;
- (void)sendEvent:(id)a0;
- (void)setEditingView:(id)a0;
- (id)editingView;

@end
