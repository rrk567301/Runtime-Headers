@class NSString, UXView, PXCMMImageViewModel, UXImageView, PXImageRequesterHelper;

@interface PXCMMImageView : UXView <PXChangeObserver> {
    UXImageView *_imageView;
    UXView *_highlightView;
    PXImageRequesterHelper *_imageRequesterHelper;
}

@property (retain, nonatomic) PXCMMImageViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateImage;
- (void)_updateContentsRect;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_updateImageRequestHelper;
- (void)_updateHighlighted;
- (BOOL)test_highlighted;

@end
