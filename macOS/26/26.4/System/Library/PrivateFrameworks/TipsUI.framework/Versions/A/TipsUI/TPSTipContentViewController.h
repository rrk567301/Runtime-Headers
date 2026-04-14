@interface TPSTipContentViewController : NSViewController {
    void /* unknown type, empty encoding */ hostingController;
}

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithTipIds:(id)a0;
- (id)initWithTipId:(id)a0;
- (id)initWithTitle:(id)a0 collectionId:(id)a1;
- (id)initWithTitle:(id)a0 collectionId:(id)a1 bundleId:(id)a2;
- (id)initWithTitle:(id)a0 collectionIds:(id)a1;
- (id)initWithTitle:(id)a0 collectionIds:(id)a1 bundleId:(id)a2;
- (id)initWithTitle:(id)a0 tipId:(id)a1;
- (id)initWithTitle:(id)a0 tipId:(id)a1 bundleId:(id)a2;
- (id)initWithTitle:(id)a0 tipIds:(id)a1;
- (id)initWithTitle:(id)a0 tipIds:(id)a1 bundleId:(id)a2;
- (id)initWithViewConfiguration:(id)a0;

@end
