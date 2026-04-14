@class NSViewController, NSView, _EXExtension, _EXSceneWindow;

@interface _EXExtensionRootViewController : NSServiceViewController

@property (retain) _EXSceneWindow *window;
@property (retain, nonatomic) NSViewController *contentViewController;
@property (retain, nonatomic) NSView *contentView;
@property (retain, nonatomic) _EXExtension *extension;

- (void)loadView;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)viewWillAppear;
- (void)embedViewController:(id)a0;

@end
