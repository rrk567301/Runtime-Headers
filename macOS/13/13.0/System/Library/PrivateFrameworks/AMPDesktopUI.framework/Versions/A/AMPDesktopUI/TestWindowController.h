@class NSButton, NSViewController, ContainerViewController, NSString, NSPopUpButton, NSMutableArray, NSWindow;

@interface TestWindowController : NSWindowController <NSWindowDelegate>

@property (class, readonly, nonatomic) NSMutableArray *manualCreators;

@property (retain, nonatomic) ContainerViewController *rootViewController;
@property (retain, nonatomic) NSViewController *testViewController;
@property (retain, nonatomic) NSWindow *testOptionsInspector;
@property (retain, nonatomic) NSPopUpButton *popupMenu;
@property (retain, nonatomic) NSButton *loadCheckbox;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerCreatorBlock:(id /* block */)a0 withName:(id)a1;

- (void).cxx_destruct;
- (void)windowWillClose:(id)a0;
- (id)windowNibName;
- (void)windowDidLoad;
- (void)windowDidOrderOnScreen:(id)a0;
- (void)load:(id)a0;
- (void)unload:(id)a0;
- (void)buildPopupMenu;
- (void)openInspector:(id)a0;
- (void)closeInspector;
- (id)buildOptionsForModel:(id)a0;
- (id)buildOptionsForModelClass:(Class)a0 modelObject:(id)a1;
- (void)selectNewViewController:(id)a0;
- (id)selectedClassName;
- (void)selectView:(id)a0;
- (void)loadAtOpen:(id)a0;

@end
