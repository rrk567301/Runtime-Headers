@class NSView, _MKUILabel;

@interface MKPhotoSmallAttributionView : NSView {
    _MKUILabel *_label;
    NSView *_backgroundView;
    struct CGSize { double width; double height; } _labelSize;
}

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layout;
- (void).cxx_destruct;
- (id)initWithMapItem:(id)a0;
- (id)attributionFont;

@end
