@interface ADMPrinterSharingConfig : NSObject

+ (id)sharedPrinterSharing;

- (char)canSeeNetworkPrinters;
- (char)isPrinterSharingOn;
- (void)setCanSeeNetworkPrinters:(char)a0;
- (void)setPrinterSharingEnabled:(char)a0;

@end
