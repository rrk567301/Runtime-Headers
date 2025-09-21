@interface GameStoreKit.MarketingItemViewController : AMSUIMarketingItemViewController {
    void /* unknown type, empty encoding */ objectGraph;
    void /* unknown type, empty encoding */ artworkLoader;
    void /* unknown type, empty encoding */ referrer;
    void /* unknown type, empty encoding */ pageContext;
    void /* unknown type, empty encoding */ dynamicDelegate;
    void /* unknown type, empty encoding */ requestInfo;
    void /* unknown type, empty encoding */ gridPresenter;
    void /* unknown type, empty encoding */ gridView;
}

- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithBag:(id)a0 URL:(id)a1;
- (id)initWithBag:(id)a0 bagValue:(id)a1;
- (id)initWithMarketingItem:(id)a0 bag:(id)a1;
- (id)initWithServiceType:(id)a0 placement:(id)a1 account:(id)a2 bag:(id)a3;
- (id)initWithServiceType:(id)a0 placement:(id)a1 bag:(id)a2;

@end
