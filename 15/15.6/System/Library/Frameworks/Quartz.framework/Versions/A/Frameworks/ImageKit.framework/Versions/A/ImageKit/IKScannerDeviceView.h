@class NSString, NSArray, NSURL, ICScannerDevice;
@protocol IKScannerDeviceViewDelegate;

@interface IKScannerDeviceView : NSView {
    id _privateData;
}

@property char reviewSimpleScanResults;
@property char displaysDeviceSelectorControl;
@property char displaysScanSizeControl;
@property char displaysDocumentNameControl;
@property char displaysFileFormatControl;
@property (copy) NSString *fileFormat;
@property (readonly) NSArray *supportedFileFormats;
@property double compressionQuality;
@property char displaysImageCorrectionControl;
@property char addAutoDetectionToScanSizeControl;
@property char displaysDoneButton;
@property unsigned long long simpleScanDocumentType;
@property unsigned long long simpleScanOverviewResolution;
@property (copy) NSString *simpleScanFileFormat;
@property id<IKScannerDeviceViewDelegate> delegate;
@property ICScannerDevice *scannerDevice;
@property long long mode;
@property char hasDisplayModeSimple;
@property char hasDisplayModeAdvanced;
@property long long transferMode;
@property (copy) NSString *scanControlLabel;
@property (copy) NSString *overviewControlLabel;
@property char displaysDownloadsDirectoryControl;
@property (retain) NSURL *downloadsDirectory;
@property (copy) NSString *documentName;
@property char displaysPostProcessApplicationControl;
@property (retain) NSURL *postProcessApplication;

+ (void)initialize;

- (void)dealloc;
- (void)finalize;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)valueForUndefinedKey:(id)a0;
- (void)awakeFromNib;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)removeFromSuperview;
- (void)viewDidMoveToSuperview;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToSuperview:(id)a0;
- (void)commonInit:(id)a0;
- (void)deviceBrowserView:(id)a0 deviceDidChangeName:(id)a1;
- (void)deviceBrowserView:(id)a0 deviceDidChangeSharingState:(id)a1;
- (void)deviceBrowserView:(id)a0 selectionDidChange:(id)a1;
- (void)drawRect_ib:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)installView:(id)a0;

@end
