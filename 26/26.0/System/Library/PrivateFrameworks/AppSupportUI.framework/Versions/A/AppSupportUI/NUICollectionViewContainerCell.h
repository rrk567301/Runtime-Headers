@class NUIContainerView;

@interface NUICollectionViewContainerCell : NSCollectionViewItem

@property (class, readonly, nonatomic) Class containerViewClass;

@property (readonly, nonatomic) NUIContainerView *containerView;

- (void)loadView;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)containerViewDidLoad;

@end
