@class QCCompositionParameterView;

@interface QCPatchParameterView : QCPatchParametersView {
    QCCompositionParameterView *_compositionParameterView;
}

- (char)isInputPortVisible:(id)a0;
- (void)localizePortInfo:(id)a0;
- (void)setCompositionParameterView:(id)a0;

@end
