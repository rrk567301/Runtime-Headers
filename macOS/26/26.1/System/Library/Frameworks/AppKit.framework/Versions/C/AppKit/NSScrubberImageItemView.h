@class NSImage, NSImageView;

@interface NSScrubberImageItemView : NSScrubberItemView {
    unsigned long long _alignment;
}

@property (readonly) NSImageView *imageView;
@property (copy) NSImage *image;
@property unsigned long long imageAlignment;

- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)encodeWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;

@end
