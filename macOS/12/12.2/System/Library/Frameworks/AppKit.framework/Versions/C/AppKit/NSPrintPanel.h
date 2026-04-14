@class NSArray, NSString, NSPrintInfo, NSView, NSMutableArray, NSWindowController;

@interface NSPrintPanel : NSObject {
    NSMutableArray *_accessoryControllers;
    id _previewController;
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
}

@property (readonly, copy) NSArray *accessoryControllers;
@property unsigned long long options;
@property (copy) NSString *helpAnchor;
@property (copy) NSString *jobStyleHint;
@property (readonly) NSPrintInfo *printInfo;

+ (id)printPanel;

- (void)dealloc;
- (id)init;
- (void)setAccessoryView:(id)a0;
- (long long)runModal;
- (id)accessoryView;
- (void)beginSheetWithPrintInfo:(id)a0 modalForWindow:(id)a1 delegate:(id)a2 didEndSelector:(SEL)a3 contextInfo:(void *)a4;
- (long long)runModalWithPrintInfo:(id)a0;
- (void)_sheet:(id)a0 didEndWithResult:(long long)a1 contextInfo:(void *)a2;
- (void)addAccessoryController:(id)a0;
- (void)removeAccessoryController:(id)a0;
- (void)pickedButton:(id)a0;
- (void)_setThumbnailView:(id)a0;
- (id)_thumbnailView;
- (void)_setPreviewController:(id)a0;
- (void)_deprecatedUpdateFromPrintInfo;
- (unsigned int)_optionsForShowingAsSheet:(BOOL)a0;
- (id)defaultButtonTitle;
- (void)setDefaultButtonTitle:(id)a0;
- (void)_deprecatedFinalWritePrintInfo;
- (long long)_runModalWithPrintInfo:(id)a0;
- (void)updateFromPrintInfo;
- (void)finalWritePrintInfo;
- (void)_deprecatedSetAccessoryView:(id)a0;
- (id)_deprecatedAccessoryView;
- (void)pickedAllPages:(id)a0;
- (void)pickedLayoutList:(id)a0;

@end
