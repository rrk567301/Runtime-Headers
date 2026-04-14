@interface OKNavigatorScrollViewController : OKNavigatorScrollViewControllerProxy {
    struct CGSize { double width; double height; } _baseContentSize;
}

+ (id)supportedSettings;

- (void)viewDidLoad;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })contentSize;
- (void)viewDidLayoutSubviews;
- (void)scrollViewDidScroll:(id)a0;
- (struct CGPoint { double x0; double x1; })contentOffset;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentBounds;
- (void)scrollViewDidEndScrolling:(id)a0;
- (void)scrollViewWillBeginScrolling:(id)a0;
- (void)setSettingAlwaysBounceVertical:(BOOL)a0;
- (void)setSettingAlwaysBounceHorizontal:(BOOL)a0;
- (void)setSettingContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)setSettingIndicatorStyle:(unsigned long long)a0;
- (void)setSettingShowsHorizontalScrollIndicator:(BOOL)a0;
- (void)setSettingShowsVerticalScrollIndicator:(BOOL)a0;
- (void)updateContentSize:(struct CGSize { double x0; double x1; })a0;

@end
