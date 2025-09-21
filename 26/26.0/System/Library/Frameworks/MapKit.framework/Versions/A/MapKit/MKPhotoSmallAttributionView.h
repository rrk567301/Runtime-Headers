@class NSView, _MKUILabel;

@interface MKPhotoSmallAttributionView : NSView {
    _MKUILabel *_label;
    NSView *_backgroundView;
    struct CGSize { double width; double height; } _labelSize;
}

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layout;
- (id)initWithMapItem:(id)a0;
- (void).cxx_destruct;
- (id)attributionFont;

@end
