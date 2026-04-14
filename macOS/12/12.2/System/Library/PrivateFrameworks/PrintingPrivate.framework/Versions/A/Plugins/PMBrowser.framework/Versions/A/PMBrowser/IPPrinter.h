@class NSString, NSArray;

@interface IPPrinter : PMBrowserPrinter <PMBrowserPrinterDeviceProtocol>

@property (retain) NSString *deviceID;
@property (retain) NSString *product;
@property BOOL supportsAirPrint;
@property BOOL supportsAirPrintSecure;
@property (nonatomic) int protocol;
@property (nonatomic) int port;
@property (copy, nonatomic) NSString *host;
@property (copy, nonatomic) NSString *queue;
@property (copy, nonatomic) NSString *location;
@property (retain, nonatomic) NSArray *authenticationInfoRequired;
@property (nonatomic) BOOL supportsFaxOut;
@property (readonly, nonatomic) BOOL supportQueueEntry;

+ (id)IPPrinterWithProtocol:(int)a0 hostAddress:(id)a1 queue:(id)a2 on:(int)a3;

- (void)dealloc;
- (id)name;
- (id)uri;
- (BOOL)configure;
- (id)airprintMatch;
- (id)ppdMatches;
- (BOOL)supportsFaxOperations;
- (BOOL)supportsPostscript;
- (BOOL)supportsPCL;
- (BOOL)supportsRaster;
- (BOOL)supportsAutoSelect;
- (BOOL)supportsAutoSetup:(id)a0;
- (id)dictionaryWithDriverSpecification:(id)a0;
- (id)printer1284DeviceID;
- (id)printerSUScanID;
- (id)initIPPrinterWithProtocol:(int)a0 hostAddress:(id)a1 queue:(id)a2 on:(int)a3;
- (id)uri:(BOOL)a0;
- (id)uriUsingScheme:(const char *)a0 queue:(id)a1;
- (struct _ipp_s { } *)getAttributes:(id)a0;

@end
