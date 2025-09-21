@class WFSlotTemplateView, WFSlotIdentifier;

@interface WorkflowUIServices.ParameterSummaryView : NSView <WFSlotTemplateViewDelegate> {
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ font;
    void /* unknown type, empty encoding */ suffixFont;
    void /* unknown type, empty encoding */ textColor;
    void /* unknown type, empty encoding */ suffixColor;
    void /* unknown type, empty encoding */ suffixString;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ templateView;
    void /* unknown type, empty encoding */ selectionQueue;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)slotTemplateView:(id)a0 deletePressedOnSlotWithIdentifier:(id)a1 allowResettingValue:(BOOL)a2;
- (void)slotTemplateView:(id)a0 didChangeText:(id)a1 forSlotWithIdentifier:(id)a2;
- (void)slotTemplateView:(WFSlotTemplateView *)a0 didDeselectSlotWithIdentifier:(WFSlotIdentifier *)a1 completionHandler:(void (^)(void))a2;
- (void)slotTemplateView:(id)a0 didSelectSlotWithIdentifier:(id)a1;
- (void)slotTemplateView:(id)a0 didTabFromSlotWithIdentifier:(id)a1 isBackTab:(BOOL)a2 originalBlock:(id /* block */)a3;
- (id)slotTemplateView:(id)a0 menuForSlotIdentifier:(id)a1 style:(unsigned long long)a2;
- (BOOL)slotTemplateView:(id)a0 shouldChangeText:(id)a1 forSlotWithIdentifier:(id)a2;
- (void)slotTemplateView:(id)a0 typingDidPasteWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 originalBlock:(id /* block */)a2;
- (void)slotTemplateViewDidInvalidateSize:(id)a0;

@end
