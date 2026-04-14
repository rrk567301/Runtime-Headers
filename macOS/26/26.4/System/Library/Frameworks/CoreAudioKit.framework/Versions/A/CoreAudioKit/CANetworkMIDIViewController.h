@interface CANetworkMIDIViewController : NSViewController

@property (nonatomic) BOOL helpButton;
@property (nonatomic) BOOL amsEmbedded;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)viewDidLoad;
- (id)initWithCoder:(id)a0;
- (id)initWithHelpButton:(BOOL)a0 amsEmbedded:(BOOL)a1;

@end
