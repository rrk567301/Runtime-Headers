@interface QCCompositionParameterView : NSView {
    void *_QCCompositionParameterViewPrivate;
}

- (void)finalize;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)backgroundColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (BOOL)drawsBackground;
- (void)dealloc;
- (void)setDrawsBackground:(BOOL)a0;
- (void)setBackgroundColor:(id)a0;
- (void)_finishInitialization;
- (unsigned long long)borderType;
- (void)setBorderType:(unsigned long long)a0;
- (BOOL)hasParameters;
- (void)__patchUpdated:(id)a0;
- (void)_setPatch:(id)a0;
- (id)compositionRenderer;
- (void)setCompositionRenderer:(id)a0;

@end
