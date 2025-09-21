@class NSXPCListener, _DPStorage, NSString;

@interface _DPServer : NSObject <NSXPCListenerDelegate, _DPDaemonProtocol>

@property (readonly, nonatomic) NSXPCListener *listener;
@property (readonly, nonatomic) _DPStorage *db;
@property (readonly, nonatomic) char metadataMethodsAllowed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)shouldNotRecord:(id)a0 forKey:(id)a1 count:(unsigned long long)a2;

- (id)init;
- (void).cxx_destruct;
- (char)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)start;
- (void)recordStrings:(id)a0 forKey:(id)a1 withReply:(id /* block */)a2;
- (void)recordNumbers:(id)a0 forKey:(id)a1 withReply:(id /* block */)a2;
- (void)donateDonationReceivedEventToBitacoraForKey:(id)a0 succeeded:(char)a1 count:(int)a2;
- (id)initWithDatabaseDirectoryPath:(id)a0 reportsDirectoryPath:(id)a1 enablePeriodicTasks:(char)a2 enterSandbox:(char)a3;
- (char)metadataMethodsAllowed;
- (void)recordBitValues:(id)a0 forKey:(id)a1 withReply:(id /* block */)a2;
- (void)recordBitValues:(id)a0 metadata:(id)a1 forKey:(id)a2 withReply:(id /* block */)a3;
- (void)recordBitVectors:(id)a0 forKey:(id)a1 withReply:(id /* block */)a2;
- (void)recordBitVectors:(id)a0 metadata:(id)a1 forKey:(id)a2 withReply:(id /* block */)a3;
- (void)recordFloatVectors:(id)a0 forKey:(id)a1 withReply:(id /* block */)a2;
- (void)recordFloatVectors:(id)a0 metadata:(id)a1 forKey:(id)a2 withReply:(id /* block */)a3;
- (void)recordNumbers:(id)a0 metadata:(id)a1 forKey:(id)a2 withReply:(id /* block */)a3;
- (void)recordNumbersVectors:(id)a0 forKey:(id)a1 withReply:(id /* block */)a2;
- (void)recordNumbersVectors:(id)a0 metadata:(id)a1 forKey:(id)a2 withReply:(id /* block */)a3;
- (void)recordStrings:(id)a0 metadata:(id)a1 forKey:(id)a2 withReply:(id /* block */)a3;
- (void)recordValues:(id)a0 forKey:(id)a1 usingSelector:(SEL)a2;
- (void)recordValues:(id)a0 metadata:(id)a1 forKey:(id)a2 usingSelector:(SEL)a3;
- (void)recordWords:(id)a0 forKey:(id)a1 withReply:(id /* block */)a2;
- (id)reportsNotYetSubmittedInDirecory:(id)a0;
- (void)reportsNotYetSubmittedWithReply:(id /* block */)a0;
- (char)retireReports:(id)a0 inDirectory:(id)a1;
- (void)retireReports:(id)a0 withReply:(id /* block */)a1;
- (void)setupPeriodicTasksWith:(id)a0;

@end
