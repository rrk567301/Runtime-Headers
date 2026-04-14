@class JUTraitCollection;

@interface JetUI.JetTraitsViewController : NSViewController <JetUI.JetTraitEnvironment>

@property (nonatomic, readonly) JUTraitCollection *jet_traitCollection;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)_viewTraitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (void)dealloc;
- (void)jet_traitCollectionDidChange:(id)a0;

@end
