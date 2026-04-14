@interface WFRemoteContentHostingViewController : NSViewController {
    void /* unknown type, empty encoding */ item;
    void /* unknown type, empty encoding */ hostForwarder;
    void /* unknown type, empty encoding */ extension;
    void /* unknown type, empty encoding */ requestIdentifier;
    void /* unknown type, empty encoding */ remoteViewController;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithItem:(id)a0;
- (void)loadView;
- (void)viewDidLoad;

@end
