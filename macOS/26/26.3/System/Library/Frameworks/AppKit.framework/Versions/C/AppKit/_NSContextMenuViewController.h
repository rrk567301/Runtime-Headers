@class NSObject;
@protocol NSContextMenuLifecycleProtocol;

@interface _NSContextMenuViewController : NSViewController {
    NSObject<NSContextMenuLifecycleProtocol> *_impl;
}

- (void)viewDidLayout;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)loadView;
- (BOOL)_viewControllerSupports10_10Features;
- (id)initWithContextMenuImpl:(id)a0;

@end
