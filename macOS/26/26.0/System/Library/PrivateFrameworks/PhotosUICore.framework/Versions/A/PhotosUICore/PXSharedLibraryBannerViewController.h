@interface PXSharedLibraryBannerViewController : NSViewController <PXBannerViewDelegate> {
    void /* unknown type, empty encoding */ bannerView;
}

- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)preparePresentationEnvironmentForBannerView:(id)a0 actionIdentifier:(id)a1 completionHandler:(id /* block */)a2;

@end
