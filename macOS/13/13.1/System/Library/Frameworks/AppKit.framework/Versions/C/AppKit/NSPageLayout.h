@class NSArray, NSPrintInfo, NSWindowController, NSMutableArray;

@interface NSPageLayout : NSObject {
    NSMutableArray *_accessoryControllers;
    NSPrintInfo *_originalPrintInfo;
    id _delegate;
    SEL _didEndSelector;
    void *_contextInfo;
    NSPrintInfo *_presentedPrintInfo;
    NSWindowController *_windowController;
}

@property (readonly, copy) NSArray *accessoryControllers;
@property (readonly) NSPrintInfo *printInfo;

+ (id)pageLayout;

- (void)dealloc;
- (void)setAccessoryView:(id)a0;
- (long long)runModal;
- (id)accessoryView;
- (void)_sheet:(id)a0 didEndWithResult:(long long)a1 contextInfo:(void *)a2;
- (void)addAccessoryController:(id)a0;
- (void)removeAccessoryController:(id)a0;
- (void)beginSheetWithPrintInfo:(id)a0 modalForWindow:(id)a1 delegate:(id)a2 didEndSelector:(SEL)a3 contextInfo:(void *)a4;
- (long long)runModalWithPrintInfo:(id)a0;
- (void)readPrintInfo;
- (void)writePrintInfo;
- (void)_deprecatedReadPrintInfo;
- (void)_deprecatedWritePrintInfo;
- (void)convertOldFactor:(float *)a0 newFactor:(float *)a1;
- (void)pickedButton:(id)a0;
- (void)pickedOrientation:(id)a0;
- (void)pickedPaperSize:(id)a0;
- (void)pickedUnits:(id)a0;

@end
