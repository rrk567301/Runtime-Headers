@class NUIContainerView;

@interface NUICollectionViewContainerCell : NSCollectionViewItem

@property (class, readonly, nonatomic) Class containerViewClass;

@property (readonly, nonatomic) NUIContainerView *containerView;

- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)containerViewDidLoad;

@end
