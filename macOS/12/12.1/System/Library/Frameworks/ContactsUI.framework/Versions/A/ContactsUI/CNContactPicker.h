@class NSArray, NSString, NSViewController, NSPopover;
@protocol CNContactPickerViewController, CNContactPickerDelegate, CNContactPickerInternalSetup;

@interface CNContactPicker : NSObject <NSPopoverDelegate, CNContactPickerInternalResponseDelegate> {
    NSPopover *_popover;
    NSViewController<CNContactPickerViewController, CNContactPickerInternalSetup> *_viewController;
}

@property (copy) NSArray *displayedKeys;
@property (weak) id<CNContactPickerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldUseInProcessPicker;
+ (id)makeViewController;
+ (id)makePopoverWithDelegate:(id)a0 contentViewController:(id)a1;
+ (id)supportedKeysToDisplay;
+ (id)publicToCompatibilityKeyMap;
+ (id)swapKeysAndValuesOfDictionary:(id)a0;

- (void)dealloc;
- (id)init;
- (void)close;
- (void).cxx_destruct;
- (void)setAppearance:(id)a0;
- (void)showRelativeToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 ofView:(id)a1 preferredEdge:(unsigned long long)a2;
- (void)popoverWillShow:(id)a0;
- (void)popoverWillClose:(id)a0;
- (void)popoverDidClose:(id)a0;
- (void)addSection:(id)a0;
- (id)privateDelegate;
- (void)registerSectionsForDraggedTypes:(id)a0;
- (void)setSearchFieldVisible:(BOOL)a0;
- (void)didSelectContact:(id)a0 key:(id)a1 value:(id)a2 identifier:(id)a3;
- (void)didSearchForString:(id)a0;
- (void)didShowSectionWithIdentifier:(id)a0;
- (BOOL)delegateExpectesCompatiblityContact;
- (void)selectSectionWithIdentifier:(id)a0;

@end
