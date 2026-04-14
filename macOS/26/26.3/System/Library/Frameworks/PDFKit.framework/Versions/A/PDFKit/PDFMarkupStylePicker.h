@class PDFMarkupStylePickerPrivate;

@interface PDFMarkupStylePicker : NSControl {
    PDFMarkupStylePickerPrivate *_private;
}

+ (Class)cellClass;

- (void)mouseExited:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)_setup;
- (void)updateTrackingAreas;
- (void).cxx_destruct;
- (void)mouseDown:(id)a0;
- (void)_labelViewAction:(id)a0;
- (id)_menuImageForHighlightAttributeWithMarkupColor:(unsigned long long)a0;
- (id)initWithDelegate:(id)a0 annotation:(id)a1;

@end
