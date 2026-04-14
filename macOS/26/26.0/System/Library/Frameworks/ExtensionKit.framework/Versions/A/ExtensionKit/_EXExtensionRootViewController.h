@class NSViewController, NSView, _EXExtension, _EXSceneWindow;

@interface _EXExtensionRootViewController : NSServiceViewController

@property (retain) _EXSceneWindow *window;
@property (retain, nonatomic) NSViewController *contentViewController;
@property (retain, nonatomic) NSView *contentView;
@property (retain, nonatomic) _EXExtension *extension;

- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)viewWillAppear;
- (void)embedViewController:(id)a0;

@end
