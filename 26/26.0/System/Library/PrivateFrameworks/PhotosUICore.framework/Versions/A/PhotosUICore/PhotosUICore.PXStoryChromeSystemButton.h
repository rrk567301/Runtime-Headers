@protocol NSCopying;

@interface PhotosUICore.PXStoryChromeSystemButton : NSButton <PXGReusableView> {
    void /* unknown type, empty encoding */ tintColor;
}

@property (nonatomic, retain) id<NSCopying> userData;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } clippingRect;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)becomeReusable;

@end
