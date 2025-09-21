@class PXGPageControlConfiguration;

@interface PXGPageControl : NSView <PXGReusableView>

@property (nonatomic) long long numberOfPages;
@property (nonatomic) long long currentPage;
@property (nonatomic) BOOL hidesForSinglePage;
@property (copy, nonatomic) PXGPageControlConfiguration *userData;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } clippingRect;
@property (readonly, nonatomic) BOOL shouldReuseWhenInvisible;
@property (readonly, nonatomic) BOOL canUnloadWhenInvisible;
@property (readonly, nonatomic) BOOL isFloating;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)becomeReusable;

@end
