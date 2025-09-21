@class JUTraitCollection;

@interface AppStoreKit.LayoutContextTraitEnvironment : NSObject <JetUI.JetTraitEnvironment>

@property (nonatomic, readonly) JUTraitCollection *jet_traitCollection;

- (id)init;
- (void).cxx_destruct;
- (void)jet_traitCollectionDidChange:(id)a0;

@end
