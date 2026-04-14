@class NSTextField, NSString, NSView, PMPPDPopUpButton, NSProgressIndicator, NSTableView, NSScrollView, NSArrayController, NSArray, NSBox;

@interface PrinterInspector : NSView <NSOpenSavePanelDelegate> {
    NSBox *_printerInspector;
    NSTextField *_printerName;
    NSTextField *_printerLocation;
    PMPPDPopUpButton *_driversPopup;
    NSTextField *_printerText;
    NSProgressIndicator *_progressIndicator;
    NSTableView *_driversTable;
    NSScrollView *_driversScroller;
    NSArrayController *_ppdsController;
    id _currentSelection;
    id _browser;
    int _originalResizingMask;
    int _lastSelectedDriverIndex;
    NSArray *_inspectorTopLevelNibObjects;
}

@property (retain) NSView *topView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (BOOL)panel:(id)a0 shouldEnableURL:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBrowser:(id)a0;
- (id)browser;
- (void)updateUI;
- (id)currentSelection;
- (void)setCurrentSelection:(id)a0;
- (void)selectionChanged:(id)a0;
- (void)driverChanged:(id)a0;
- (void)sendPrinterChangedNotification;
- (void)printerUpdated:(id)a0;
- (void)nameChanged:(id)a0;
- (void)infoChanged:(id)a0;

@end
