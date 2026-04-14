@interface TPKContentPopoverViewController : NSViewController

@property (nonatomic, retain) void /* unknown type, empty encoding */ contentView;
@property (nonatomic, retain) void /* unknown type, empty encoding */ popover;
@property (nonatomic, weak) void /* unknown type, empty encoding */ sourceView;
@property (nonatomic) void /* unknown type, empty encoding */ sourceRect;
@property (nonatomic) void /* unknown type, empty encoding */ preferredPopoverWidth;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)viewDidLoad;
- (void)dismissPopoverAnimated:(BOOL)a0;
- (id)initWithContentController:(id)a0 tipContent:(id)a1 sourceView:(id)a2;
- (id)initWithContentController:(id)a0 tipContent:(id)a1 sourceView:(id)a2 popoverDelegate:(id)a3;
- (void)presentPopoverWithPreferredEdge:(unsigned long long)a0;

@end
