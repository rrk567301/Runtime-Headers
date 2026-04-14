@interface PMBrowserPrinter : NSObject <PMBrowserPrinterProtocol>

- (id)description;
- (id)name;
- (long long)compare:(id)a0;
- (id)location;
- (id)uri;
- (BOOL)configure;
- (BOOL)cancelConfigure;
- (id)airprintMatch;
- (id)browserIdentifier;
- (BOOL)canDetermineDriver;
- (id)dictionaryWithDriverSpecification:(id)a0;
- (id)driverList:(id)a0;
- (id)matchPPDBasedDrivers;
- (id)ppdMatches;
- (BOOL)selectStandardDefaults;
- (BOOL)setupNeeded;
- (id)suPrinterDriver:(BOOL)a0;
- (BOOL)supportsAutoSelect;
- (BOOL)supportsAutoSetup:(id)a0;
- (BOOL)supportsFaxOperations;
- (BOOL)supportsPCL;
- (BOOL)supportsPostscript;
- (BOOL)supportsRaster;

@end
