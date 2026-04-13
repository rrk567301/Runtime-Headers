@class NSURL, LPARAsset, NSView;

@interface LPARAssetView : LPComponentView {
    LPARAsset *_arAsset;
    NSView *_arAssetView;
    struct NSEdgeInsets { double top; double left; double bottom; double right; } _contentInset;
}

@property (readonly, retain, nonatomic) NSURL *URL;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithHost:(id)a0;
- (id)initWithHost:(id)a0 ARAsset:(id)a1;

@end
