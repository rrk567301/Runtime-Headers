@class JUTraitCollection;

@interface JetUI.JetTraitsViewController : NSViewController <JetUI.JetTraitEnvironment>

@property (nonatomic, readonly) JUTraitCollection *jet_traitCollection;

- (void)_viewTraitCollectionDidChange:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)jet_traitCollectionDidChange:(id)a0;

@end
