@interface PrintSheetSuppressionManager : DisruptiveUISuppressionManager

- (id)dequeuePrintRequest;
- (void)enqueuePrintRequestForFrameHande:(id)a0 shouldWaitUntilDone:(char)a1 pdfFirstPageSize:(struct CGSize { double x0; double x1; })a2;

@end
