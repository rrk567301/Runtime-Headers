@class NSTextField, NSString, ABPeoplePickerView, NSView, NSPopUpButton, NSArray, NSWindow;

@interface ABDistributionListController : NSObject <NSWindowRestoration> {
    NSWindow *window;
    NSPopUpButton *labelPopUp;
    ABPeoplePickerView *peoplePickerView;
    NSView *accessoryView;
    NSString *_property;
    NSArray *_labels;
}

@property (weak) NSTextField *informativeText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)restoreWindowWithIdentifier:(id)a0 state:(id)a1 completionHandler:(id /* block */)a2;
+ (id)sharedDistributionListController;

- (BOOL)windowShouldClose:(id)a0;
- (void)cancel:(id)a0;
- (void)windowWillClose:(id)a0;
- (void)dealloc;
- (void)setGroup:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)ok:(id)a0;
- (void)awakeFromNib;
- (void)restoreWindowWithIdentifier:(id)a0 state:(id)a1 completionHandler:(id /* block */)a2;
- (void)window:(id)a0 willEncodeRestorableState:(id)a1;
- (void)help:(id)a0;
- (void)_reloadLabelPopUp;
- (void)dismissSheet;
- (void)labelSelected:(id)a0;
- (void)showSheetForWindow:(id)a0;
- (void)windowFrameChanged:(id)a0;

@end
