@interface ADMPrinterSharingConfig : NSObject

+ (id)sharedPrinterSharing;

- (BOOL)isPrinterSharingOn;
- (void)setPrinterSharingEnabled:(BOOL)a0;
- (BOOL)canSeeNetworkPrinters;
- (void)setCanSeeNetworkPrinters:(BOOL)a0;

@end
