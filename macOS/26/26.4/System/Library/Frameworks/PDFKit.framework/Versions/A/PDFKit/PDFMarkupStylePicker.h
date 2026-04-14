@class PDFMarkupStylePickerPrivate;

@interface PDFMarkupStylePicker : NSControl {
    PDFMarkupStylePickerPrivate *_private;
}

+ (Class)cellClass;

- (void)_setup;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void).cxx_destruct;
- (void)mouseDown:(id)a0;
- (void)updateTrackingAreas;
- (void)_labelViewAction:(id)a0;
- (id)_menuImageForHighlightAttributeWithMarkupColor:(unsigned long long)a0;
- (id)initWithDelegate:(id)a0 annotation:(id)a1;

@end
