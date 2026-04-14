@interface WFRemoteContentHostingViewController : NSViewController {
    void /* unknown type, empty encoding */ item;
    void /* unknown type, empty encoding */ hostForwarder;
    void /* unknown type, empty encoding */ extension;
    void /* unknown type, empty encoding */ requestIdentifier;
    void /* unknown type, empty encoding */ remoteViewController;
}

@property (nonatomic, weak) void /* function */ delegate;

- (id)initWithItem:(id)a0;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)loadView;
- (void)viewDidAppear;

@end
