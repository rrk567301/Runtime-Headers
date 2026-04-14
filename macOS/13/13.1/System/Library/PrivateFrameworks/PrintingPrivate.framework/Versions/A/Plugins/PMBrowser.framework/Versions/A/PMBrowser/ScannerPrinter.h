@class ICScannerDevice;

@interface ScannerPrinter : PMBrowserPrinter

@property (retain) ICScannerDevice *device;

+ (id)scannerWithDevice:(id)a0;

- (void)dealloc;
- (id)name;
- (id)location;
- (id)uri;
- (id)browserIdentifier;
- (id)dictionaryWithDriverSpecification:(id)a0;
- (id)ppdMatches;
- (id)ppdFile:(id)a0;
- (id)initScannerWithDevice:(id)a0;

@end
