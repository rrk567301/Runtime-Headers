@class NSView, NSString, NSArray, NSPrintPreviewController, NSPrintOperation, NSWindowController, NSPrintInfo, NSMutableArray, NSMapTable;

@interface NSPrintPanel : NSObject {
    NSMutableArray *_accessoryControllers;
    NSPrintOperation *_printOperation;
    NSPrintPreviewController *_previewController;
    NSView *_thumbnailView;
    long long _options;
    NSString *_defaultButtonTitle;
    NSString *_helpAnchor;
    NSString *_jobStyleHint;
    NSPrintInfo *_originalPrintInfo;
    id _delegate;
    SEL _didEndSelector;
    void *_contextInfo;
    NSPrintInfo *_presentedPrintInfo;
    NSWindowController *_windowController;
    NSMapTable *_observedKeyPathsPerAccessoryController;
}

@property (readonly, copy) NSArray *accessoryControllers;
@property unsigned long long options;
@property (copy) NSString *helpAnchor;
@property (copy) NSString *jobStyleHint;
@property (readonly) NSPrintInfo *printInfo;

+ (id)printPanel;
+ (BOOL)_isPrintUIRefreshEnabled;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (long long)runModal;
- (void)setAccessoryView:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)accessoryView;
- (void)_sheet:(id)a0 didEndWithResult:(long long)a1 contextInfo:(void *)a2;
- (void)addAccessoryController:(id)a0;
- (void)removeAccessoryController:(id)a0;
- (void)beginSheetWithPrintInfo:(id)a0 modalForWindow:(id)a1 delegate:(id)a2 didEndSelector:(SEL)a3 contextInfo:(void *)a4;
- (long long)runModalWithPrintInfo:(id)a0;
- (void)pickedButton:(id)a0;
- (void)_setPrintOperation:(id)a0;
- (id)_thumbnailView;
- (void)_setThumbnailView:(id)a0;
- (void)_updatePrintPreviewNow:(id)a0;
- (void)setDefaultButtonTitle:(id)a0;
- (id)defaultButtonTitle;
- (unsigned int)_optionsForShowingAsSheet:(BOOL)a0;
- (id)_makeRomePrintWindowControllerWithPrintOperation:(id)a0 sheet:(BOOL)a1;
- (void)_startObservingAccessoryControllersForPreviewUpdates;
- (void)_stopObservingAccessoryControllersForPreviewUpdates;
- (void)_updatePrintPreviewDeferred;
- (void)_cancelDeferredPrintPreview;
- (long long)_runModalWithPrintInfo:(id)a0;
- (void)_setPreviewController:(id)a0;
- (void)updateFromPrintInfo;
- (void)finalWritePrintInfo;
- (void)_deprecatedSetAccessoryView:(id)a0;
- (id)_deprecatedAccessoryView;
- (void)_deprecatedUpdateFromPrintInfo;
- (void)_deprecatedFinalWritePrintInfo;
- (void)pickedAllPages:(id)a0;
- (void)pickedLayoutList:(id)a0;

@end
