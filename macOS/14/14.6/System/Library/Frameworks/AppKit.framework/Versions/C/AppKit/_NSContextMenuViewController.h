@class NSContextMenuImpl;

@interface _NSContextMenuViewController : NSViewController {
    NSContextMenuImpl *_impl;
}

- (void).cxx_destruct;
- (BOOL)_viewControllerSupports10_10Features;
- (id)initWithContextMenuImpl:(id)a0;
- (void)loadView;
- (void)viewDidLayout;
- (void)viewDidLoad;

@end
