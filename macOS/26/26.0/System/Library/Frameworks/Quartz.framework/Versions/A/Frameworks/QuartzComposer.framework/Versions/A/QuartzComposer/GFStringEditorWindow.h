@class NSView;

@interface GFStringEditorWindow : NSWindow {
    NSView *_editingView;
}

- (void)setSize:(struct CGSize { double x0; double x1; })a0;
- (void)sendEvent:(id)a0;
- (void)dealloc;
- (id)init;
- (BOOL)canBecomeKeyWindow;
- (struct CGSize { double x0; double x1; })size;
- (void)setEditingView:(id)a0;
- (id)editingView;

@end
