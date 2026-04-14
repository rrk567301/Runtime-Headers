@class NUIContainerView;

@interface NUICollectionViewContainerCell : NSCollectionViewItem

@property (class, readonly, nonatomic) Class containerViewClass;

@property (readonly, nonatomic) NUIContainerView *containerView;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void).cxx_destruct;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (void)containerViewDidLoad;

@end
