@class JUTraitCollection;

@interface JetUI._NSViewTraitEnvironment : NSObject <JetUI.JetTraitEnvironment> {
    void /* unknown type, empty encoding */ view;
    void /* unknown type, empty encoding */ viewObservations;
}

@property (nonatomic, retain) JUTraitCollection *jet_traitCollection;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)jet_traitCollectionDidChange:(id)a0;

@end
