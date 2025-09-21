@protocol NSCopying;

@interface PhotosUICore.PhotosDynamicHeaderView : UXView <PXGReusableView> {
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ contentView;
}

@property (nonatomic, retain) id<NSCopying> userData;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } clippingRect;
@property (nonatomic, readonly) BOOL isFloating;
@property (nonatomic, readonly) BOOL canUnloadWhenInvisible;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)becomeReusable;

@end
