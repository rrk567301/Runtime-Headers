@interface QCCompositionParameterView : NSView {
    void *_QCCompositionParameterViewPrivate;
}

- (void)finalize;
- (void)setDrawsBackground:(BOOL)a0;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setDelegate:(id)a0;
- (BOOL)drawsBackground;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)delegate;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_finishInitialization;
- (unsigned long long)borderType;
- (void)setBorderType:(unsigned long long)a0;
- (BOOL)hasParameters;
- (void)__patchUpdated:(id)a0;
- (void)_setPatch:(id)a0;
- (id)compositionRenderer;
- (void)setCompositionRenderer:(id)a0;

@end
