@class NSString, NSArrayController, NSArray, NSTableView, NSButton;

@interface PPDPickerWindowController : NSWindowController <NSOpenSavePanelDelegate> {
    NSButton *_otherButton;
    NSTableView *_driversTable;
    NSArrayController *_ppdsController;
    NSArray *_ppdPickerTopLevelNibObjects;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (long long)runModal;
- (void)ok:(id)a0;
- (void)cancel:(id)a0;
- (void)filter:(id)a0;
- (id)selectedPPD;
- (void)setHideOthers:(BOOL)a0;
- (void)setPrintersMatchedPPDs:(id)a0;

@end
