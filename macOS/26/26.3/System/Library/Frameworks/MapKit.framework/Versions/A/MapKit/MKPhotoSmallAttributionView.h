@class NSView, _MKUILabel;

@interface MKPhotoSmallAttributionView : NSView {
    _MKUILabel *_label;
    NSView *_backgroundView;
    struct CGSize { double width; double height; } _labelSize;
}

- (id)initWithMapItem:(id)a0;
- (void)layout;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)attributionFont;

@end
