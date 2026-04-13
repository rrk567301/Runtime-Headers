@class NSURL, NSString, NSImage;

@interface _WKActivatedElementInfo : NSObject {
    struct RetainPtr<NSURL> { void *m_ptr; } _URL;
    struct RetainPtr<NSURL> { void *m_ptr; } _imageURL;
    struct RetainPtr<NSString> { void *m_ptr; } _title;
    struct IntPoint { int m_x; int m_y; } _interactionLocation;
    struct RetainPtr<NSString> { void *m_ptr; } _ID;
    struct RefPtr<WebKit::ShareableBitmap, WTF::RawPtrTraits<WebKit::ShareableBitmap>, WTF::DefaultRefDerefTraits<WebKit::ShareableBitmap>> { struct ShareableBitmap *m_ptr; } _image;
    struct RetainPtr<NSImage> { void *m_ptr; } _cocoaImage;
    BOOL _animatedImage;
}

@property (readonly, nonatomic) struct IntPoint { int x0; int x1; } _interactionLocation;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSURL *imageURL;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundingRect;
@property (readonly, nonatomic) NSString *ID;
@property (readonly, nonatomic) BOOL isAnimatedImage;
@property (readonly, copy, nonatomic) NSImage *image;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)_initWithType:(long long)a0 URL:(id)a1 imageURL:(id)a2 location:(const struct IntPoint { int x0; int x1; } *)a3 title:(id)a4 ID:(id)a5 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a6 image:(void *)a7 userInfo:(id)a8;
- (id)_initWithType:(long long)a0 URL:(id)a1 imageURL:(id)a2 location:(const struct IntPoint { int x0; int x1; } *)a3 title:(id)a4 ID:(id)a5 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a6 image:(void *)a7;

@end
