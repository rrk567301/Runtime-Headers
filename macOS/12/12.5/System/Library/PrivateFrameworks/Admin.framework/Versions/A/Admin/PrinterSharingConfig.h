@interface PrinterSharingConfig : NSObject

+ (id)sharedPrinterSharing;

- (void)setPrinterSharingEnabled:(BOOL)a0;
- (BOOL)isPrinterSharingOn;
- (BOOL)canSeeNetworkPrinters;
- (void)setCanSeeNetworkPrinters:(BOOL)a0;

@end
