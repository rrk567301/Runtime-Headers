@class NSString, NSMutableDictionary, NSMutableArray, DNSSDConfigure;

@interface DNSSDPrinter : PMBrowserPrinter <PMBrowserPrinterDeviceProtocol, PMBrowserPrinterScannerProtocol> {
    NSString *_serviceName;
    NSString *_domain;
    NSMutableDictionary *_regTypes;
    NSMutableArray *_deviceIDs;
    DNSSDConfigure *_configureObject;
}

@property (retain) NSString *scannerUUID;
@property (retain) NSString *scannerModulePath;

+ (id)dnssdPrinterWithName:(id)a0 domain:(id)a1 type:(id)a2;

- (void)dealloc;
- (id)name;
- (id)domain;
- (id)location;
- (id)deviceID;
- (void)setServiceName:(id)a0;
- (BOOL)isShared;
- (void)setDomain:(id)a0;
- (void)setDeviceIDs:(id)a0;
- (id)deviceIDs;
- (BOOL)isSecure;
- (BOOL)isLocal;
- (BOOL)configure;
- (id)airprintMatch;
- (id)ppdMatches;
- (id)browserIdentifier;
- (BOOL)supportsFaxOperations;
- (BOOL)supportsPostscript;
- (BOOL)supportsPCL;
- (BOOL)supportsRaster;
- (BOOL)supportsAutoSelect;
- (BOOL)supportsAutoSetup:(id)a0;
- (BOOL)cancelConfigure;
- (id)dictionaryWithDriverSpecification:(id)a0;
- (id)printer1284DeviceID;
- (id)printerSUScanID;
- (BOOL)isLocallyShared;
- (BOOL)isUSB;
- (int)addRegistrationType:(id)a0 domain:(id)a1;
- (int)removeRegistrationType:(id)a0 domain:(id)a1;
- (void)dnssdConfigure:(id)a0 didCompleteConfigure:(id)a1;
- (void)setRegTypes:(id)a0;
- (void)setConfigureObject:(id)a0;
- (BOOL)supportsIPServices;
- (id)configureObject;
- (id)regTypes;
- (id)uriForDeviceID:(id)a0;
- (BOOL)isAirPrint;
- (id)registrationTypes;
- (void)setScannerUUID:(id)a0 modulePath:(id)a1;
- (BOOL)matchesICDevice:(id)a0;
- (BOOL)isFax;
- (id)textRecords;
- (id)usbDeviceID:(id)a0;
- (id)initDNSSDPrinterWithName:(id)a0 domain:(id)a1 type:(id)a2;

@end
