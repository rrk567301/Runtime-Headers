@class SKUIStoreProductViewController;
@protocol SKStoreProductViewControllerDelegate;

@interface SKStoreProductViewController : NSViewController {
    SKUIStoreProductViewController *_productViewController;
}

@property (weak, nonatomic) id<SKStoreProductViewControllerDelegate> delegate;

- (void).cxx_destruct;
- (void)loadView;
- (void)loadProductWithParameters:(id)a0 completionBlock:(id /* block */)a1;

@end
