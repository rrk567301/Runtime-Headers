@class NSString, NSMutableDictionary, NSMutableArray;

@interface DNSSDConfigure : NSObject {
    const char *_ppd;
}

@property BOOL hasNoneDotLocalDomain;
@property BOOL resolvedNoneDotLocal;
@property (retain) NSMutableDictionary *deviceIDs;
@property (retain) NSMutableDictionary *serviceKeys;
@property (retain, nonatomic) NSMutableArray *resolveRefs;
@property struct _DNSServiceRef_t { } *mainRef;
@property (retain) NSString *name;
@property BOOL shared;
@property id delegate;

+ (id)dnssdConfigureWithPrinter:(id)a0;

- (void)dealloc;
- (id)initWithPrinter:(id)a0;
- (double)determineDelay:(const char *)a0;
- (void)setPPD:(const char *)a0;
- (void)addTxtRecord:(id)a0 forName:(id)a1;
- (id)authInfoRequired:(id)a0;
- (void)configureDone;
- (struct _http_s { } *)connect:(const char *)a0 port:(unsigned short)a1 encryption:(int)a2;
- (const char *)getPPD;
- (const char *)printerName:(id)a0;
- (id)sortTxtRecordsByPriority;
- (void)startConfigureWithTypes:(id)a0;
- (void)stopConfigure;
- (void)updatePPDForPrinter:(id)a0 on:(const char *)a1 port:(unsigned short)a2 encryption:(int)a3;

@end
