@interface PMBrowserPrinter : NSObject <PMBrowserPrinterProtocol>

- (id)description;
- (id)name;
- (long long)compare:(id)a0;
- (id)location;
- (id)uri;
- (BOOL)configure;
- (id)airprintMatch;
- (id)matchPPDBasedDrivers;
- (id)ppdMatches;
- (id)browserIdentifier;
- (BOOL)supportsFaxOperations;
- (BOOL)supportsPostscript;
- (BOOL)supportsPCL;
- (BOOL)supportsRaster;
- (BOOL)selectStandardDefaults;
- (BOOL)canDetermineDriver;
- (BOOL)setupNeeded;
- (BOOL)supportsAutoSelect;
- (BOOL)supportsAutoSetup:(id)a0;
- (BOOL)cancelConfigure;
- (id)dictionaryWithDriverSpecification:(id)a0;
- (id)driverList:(id)a0;
- (id)suPrinterDriver:(BOOL)a0;

@end
