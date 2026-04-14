@class NSView;

@interface AMSUIWebSnapshotView : AMSUICommonView

@property (retain) NSView *snapshot;
@property double originalRatio;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originalSnapshotFrame;

+ (void)_screenCapFromView:(id)a0 completion:(id /* block */)a1;
+ (id)_imageViewForImage:(id)a0;

- (void).cxx_destruct;
- (void)_updateSnapshot:(id)a0;
- (void)layoutSubviews;
- (id)initWithView:(id)a0 completion:(id /* block */)a1;

@end
