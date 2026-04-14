@class NSMutableArray, NSString, NSNetService, NSDictionary, NSLock, NSObject, GCDAsyncSocket;
@protocol OS_dispatch_queue;

@interface HTTPServer : NSObject <NSNetServiceDelegate> {
    GCDAsyncSocket *asyncSocket;
    NSObject<OS_dispatch_queue> *serverQueue;
    void *IsOnServerQueueKey;
    NSString *documentRoot;
    Class connectionClass;
    NSString *interface;
    unsigned short port;
    NSNetService *netService;
    NSString *domain;
    NSString *type;
    NSString *name;
    NSString *publishedName;
    NSDictionary *txtRecordDictionary;
    NSMutableArray *connections;
    NSLock *connectionsLock;
    int IPv4Socket;
    int IPv6Socket;
    int unixSocket;
    BOOL isRunning;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (void)performBonjourBlock:(id /* block */)a0;
+ (void)startBonjourThreadIfNeeded;
+ (void)bonjourThread;
+ (void)executeBonjourBlock:(id /* block */)a0;

- (void)dealloc;
- (id)init;
- (id)name;
- (id)domain;
- (void).cxx_destruct;
- (id)type;
- (void)setType:(id)a0;
- (unsigned short)port;
- (void)setName:(id)a0;
- (void)setPort:(unsigned short)a0;
- (void)stop;
- (void)netService:(id)a0 didNotPublish:(id)a1;
- (id)config;
- (BOOL)isRunning;
- (void)stop:(BOOL)a0;
- (void)setDomain:(id)a0;
- (id)interface;
- (void)setInterface:(id)a0;
- (void)netServiceDidPublish:(id)a0;
- (BOOL)start:(id *)a0;
- (id)documentRoot;
- (void)setDocumentRoot:(id)a0;
- (Class)connectionClass;
- (void)connectionDidDie:(id)a0;
- (void)publishBonjour;
- (void)unpublishBonjour;
- (void)setConnectionClass:(Class)a0;
- (id)listeningAddresses;
- (unsigned short)listeningPort;
- (id)publishedName;
- (id)TXTRecordDictionary;
- (void)setTXTRecordDictionary:(id)a0;
- (int)listeningIPv4Socket;
- (void)setListeningIPv4Socket:(int)a0;
- (int)listeningIPv6Socket;
- (void)setListeningIPv6Socket:(int)a0;
- (int)listeningUnixSocket;
- (void)setListeningUnixSocket:(int)a0;
- (unsigned long long)numberOfHTTPConnections;
- (void)socket:(id)a0 didAcceptNewSocket:(id)a1;
- (void)republishBonjour;

@end
