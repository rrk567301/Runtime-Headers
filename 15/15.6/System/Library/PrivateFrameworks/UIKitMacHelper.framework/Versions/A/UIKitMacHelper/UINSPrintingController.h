@class NSString;

@interface UINSPrintingController : NSObject {
    char _isShowingPrintOrExportSheet;
    char _isShowingPrintOrExportAppModalDialog;
}

@property (retain, nonatomic) NSString *sceneIdentifier;

+ (id)_currentPrintInfoDictionaryForPrintOperation:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)_abortModalPrintOperation;
- (id)_newNSPrintInfoFromUIPrintInfo:(id)a0 isExport:(char)a1;
- (id)_pdfExportOperationWithPrintInfo:(id)a0 andPDFDocumentGenerator:(id /* block */)a1;
- (void)_printOperationDidRun:(id)a0 success:(char)a1 contextInfo:(void *)a2;
- (id)_printOperationWithPrintInfo:(id)a0 andPDFDocumentGenerator:(id /* block */)a1;
- (void)_runModalPrintOperation:(id)a0 withCompletion:(id /* block */)a1;
- (void)_showPanelWithPrintInfo:(id)a0 andPDFDocumentGenerator:(id /* block */)a1 isExport:(char)a2;
- (void)dismissPrintOrExportPanel;
- (void)showExportPanelWithPrintInfo:(id)a0 andPDFDocumentGenerator:(id /* block */)a1;
- (void)showPrintPanelWithPrintInfo:(id)a0 andPDFDocumentGenerator:(id /* block */)a1;

@end
