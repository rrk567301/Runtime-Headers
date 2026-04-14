@class NSString, IKScanUIControllerAdvanced, NSMutableArray;

@interface IKSelfTestHandler : NSObject {
    NSMutableArray *_selfTests;
}

@property IKScanUIControllerAdvanced *delegate;
@property (copy) NSString *downloadDirectory;
@property (copy) NSString *deviceName;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } scanRect;
@property struct CGSize { double width; double height; } selectionSize;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } scanRectNonClipped;
@property double rotationAngle;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rotatedScanRect;
@property struct CGSize { double width; double height; } rotatedSelectionSize;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rotatedScanRectNonClipped;
@property unsigned long long resolution;

- (void)setStatusText:(id)a0;
- (void)done;
- (void)prepareSelfTest;
- (id)filterArrayForText;
- (id)filterArrayForGray;
- (id)filterArrayForColor;
- (void)pushStatusText:(id)a0;
- (void)popStatusText;
- (void)scanFailed:(id)a0 error:(id)a1;
- (void)startSelfTest:(id)a0 functionalUnit:(id)a1;
- (id)filterArrayForPixelDataType:(unsigned long long)a0;
- (BOOL)setupScanRectAtIndex:(unsigned long long)a0 ikScan:(id)a1;
- (void)didCompleteScansToURLs:(id)a0;
- (void)didCompleteScanToURL:(id)a0;
- (void)didCompleteOverviewScanWithError:(id)a0;
- (void)scannerResquestsOverviewScan;
- (void)selfTestFailed:(id)a0;

@end
