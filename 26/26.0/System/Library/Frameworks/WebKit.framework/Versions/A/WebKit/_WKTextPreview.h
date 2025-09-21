@interface _WKTextPreview : NSObject {
    struct RetainPtr<CGImage *> { struct CGImage *m_ptr; } _previewImage;
}

@property (readonly) struct CGImage { } *previewImage;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } presentationFrame;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithSnapshotImage:(struct CGImage { } *)a0 presentationFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
