@class UXView;

@interface UXProxyViewController : UXViewController {
    UXView *_proxyView;
}

- (id)view;
- (void).cxx_destruct;
- (id)initWithView:(id)a0;
- (void)didMoveToParentViewController:(id)a0;
- (BOOL)isViewLoaded;

@end
