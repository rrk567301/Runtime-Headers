@class ContainerViewController, NSViewController, NSString, NSPopUpButton, NSButton, NSWindow;

@interface TestWindowController : NSWindowController <NSWindowDelegate>

@property (retain, nonatomic) ContainerViewController *rootViewController;
@property (retain, nonatomic) NSViewController *testViewController;
@property (retain, nonatomic) NSWindow *testOptionsInspector;
@property (retain, nonatomic) NSPopUpButton *popupMenu;
@property (retain, nonatomic) NSButton *loadCheckbox;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)windowWillClose:(id)a0;
- (void)windowDidLoad;
- (void)load:(id)a0;
- (void)unload:(id)a0;
- (void)selectView:(id)a0;
- (void)closeInspector;
- (id)buildOptionsForModelClass:(Class)a0 modelObject:(id)a1;
- (void)buildPopupMenu;
- (void)openInspector:(id)a0;
- (id)buildOptionsForModel:(id)a0;
- (id)selectedClassName;
- (void)selectNewViewController:(id)a0;
- (void)loadAtOpen:(id)a0;

@end
