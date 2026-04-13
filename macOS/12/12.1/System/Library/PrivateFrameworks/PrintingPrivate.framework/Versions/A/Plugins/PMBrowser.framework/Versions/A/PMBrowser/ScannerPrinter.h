@class ICDevice;

@interface ScannerPrinter : PMBrowserPrinter

@property (retain) ICDevice *device;

+ (id)scannerWithDevice:(id)a0;

- (void)dealloc;
- (id)name;
- (id)location;
- (id)uri;
- (id)ppdMatches;
- (id)browserIdentifier;
- (id)dictionaryWithDriverSpecification:(id)a0;
- (id)ppdFile:(id)a0;
- (id)initScannerWithDevice:(id)a0;

@end
