@class QCPatch, GFList, NSMutableArray;

@interface QCPatchParametersView : NSView {
    QCPatch *_patch;
    unsigned long long _mask;
    char _autosize;
    GFList *_patches;
    NSMutableArray *_ports;
    GFList *_labels;
    NSMutableArray *_views;
    struct CGSize { double width; double height; } _size;
    void *_unused[4];
}

+ (void)initialize;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_cleanup;
- (void)_finishInitialization;
- (void)_setup;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)isFlipped;
- (void)resizeSubviewsWithOldSize:(struct CGSize { double x0; double x1; })a0;
- (Class)valueClassForBinding:(id)a0;
- (void)viewWillMoveToWindow:(id)a0;
- (id)_labels;
- (void)_layoutUpdated:(id)a0;
- (void)_attributesUpdated:(id)a0;
- (void)_setView:(id)a0 enabled:(char)a1;
- (void)_stateUpdated:(id)a0;
- (char)autoresize;
- (struct CGSize { double x0; double x1; })bestSize;
- (unsigned long long)inputsVisibilityMask;
- (char)isInputPortVisible:(id)a0;
- (void)localizePortInfo:(id)a0;
- (id)patch;
- (void)setAutoresize:(char)a0;
- (void)setInputsVisibilityMask:(unsigned long long)a0;
- (void)setPatch:(id)a0;
- (unsigned long long)visibleInputs;

@end
