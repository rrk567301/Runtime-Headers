@class NSObject;
@protocol NSContextMenuLifecycleProtocol;

@interface _NSContextMenuViewController : NSViewController {
    NSObject<NSContextMenuLifecycleProtocol> *_impl;
}

- (void)loadView;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewDidLayout;
- (BOOL)_viewControllerSupports10_10Features;
- (id)initWithContextMenuImpl:(id)a0;

@end
