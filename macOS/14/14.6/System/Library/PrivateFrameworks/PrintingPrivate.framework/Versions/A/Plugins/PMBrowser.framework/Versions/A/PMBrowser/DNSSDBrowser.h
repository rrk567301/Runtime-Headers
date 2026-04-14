@class NSMutableDictionary, NSMutableArray;

@interface DNSSDBrowser : PMBrowserNoUIPlugin

@property (nonatomic) struct _DNSServiceRef_t { } *mainBrowsingSocket;
@property (retain) NSMutableDictionary *nodes;
@property (retain) NSMutableArray *added;
@property (retain) NSMutableArray *removed;

+ (id)instantiatePlugin;

- (void)dealloc;
- (void)startBrowsing;
- (void)stopBrowsing;
- (void)callBack:(unsigned int)a0 interface:(unsigned int)a1 name:(id)a2 regType:(id)a3 domain:(id)a4;
- (void)startBrowsingType:(const char *)a0 interface:(unsigned int)a1 callback:(void /* function */ *)a2;

@end
