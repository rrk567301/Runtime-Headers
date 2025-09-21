@class NSMenu, NSPopUpButton;

@interface LUI2PowerViewController : LUI2ViewController

@property (retain) NSMenu *powerMenu;
@property (retain) NSPopUpButton *powerButton;
@property char actionsWillPromptUser;
@property char restartHidden;
@property char shutdownHidden;
@property char sleepHidden;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setEnabled:(char)a0;
- (void)viewDidLoad;
- (id)restartMenuItem;
- (id)shutdownMenuItem;
- (id)sleepMenuItem;
- (void)updateMenuTitles;

@end
