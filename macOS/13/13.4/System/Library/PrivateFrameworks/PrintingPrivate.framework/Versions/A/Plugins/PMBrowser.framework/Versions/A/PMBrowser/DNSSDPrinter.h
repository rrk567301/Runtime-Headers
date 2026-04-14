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
- (void)setDomain:(id)a0;
- (void)setServiceName:(id)a0;
- (BOOL)isShared;
- (id)deviceIDs;
- (void)setDeviceIDs:(id)a0;
- (BOOL)isSecure;
- (BOOL)isLocal;
- (BOOL)configure;
- (BOOL)isUSB;
- (BOOL)cancelConfigure;
- (BOOL)isLocallyShared;
- (id)printerSUScanID;
- (id)configureObject;
- (id)uriForDeviceID:(id)a0;
- (int)addRegistrationType:(id)a0 domain:(id)a1;
- (id)airprintMatch;
- (id)browserIdentifier;
- (id)dictionaryWithDriverSpecification:(id)a0;
- (void)dnssdConfigure:(id)a0 didCompleteConfigure:(id)a1;
- (id)initDNSSDPrinterWithName:(id)a0 domain:(id)a1 type:(id)a2;
- (BOOL)isAirPrint;
- (BOOL)isFax;
- (BOOL)matchesICDevice:(id)a0;
- (id)ppdMatches;
- (id)printer1284DeviceID;
- (id)regTypes;
- (id)registrationTypes;
- (int)removeRegistrationType:(id)a0 domain:(id)a1;
- (void)setConfigureObject:(id)a0;
- (void)setRegTypes:(id)a0;
- (void)setScannerUUID:(id)a0 modulePath:(id)a1;
- (BOOL)supportsAutoSelect;
- (BOOL)supportsAutoSetup:(id)a0;
- (BOOL)supportsFaxOperations;
- (BOOL)supportsIPServices;
- (BOOL)supportsPCL;
- (BOOL)supportsPostscript;
- (BOOL)supportsRaster;
- (id)textRecords;
- (id)usbDeviceID:(id)a0;

@end
