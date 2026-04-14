@class JUTraitCollection;

@interface AppStoreKit.LayoutContextTraitEnvironment : NSObject <JetUI.JetTraitEnvironment>

@property (nonatomic, readonly) JUTraitCollection *jet_traitCollection;

- (void).cxx_destruct;
- (id)init;
- (void)jet_traitCollectionDidChange:(id)a0;

@end
