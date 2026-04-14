@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue, OS_os_log, AMPArtworkEventsProtocol;

@interface AMPArtworkClient : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *replyQueue;
@property (retain, nonatomic) NSObject<OS_os_log> *logHandle;
@property (weak, nonatomic) id<AMPArtworkEventsProtocol> eventsDelegate;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)currentConnection;
- (id)initWithQueue:(id)a0;
- (void)connect;
- (void)connectionInvalidated;
- (void)lookupArtworkForInfo:(id)a0 forDatabase:(unsigned long long)a1 withReply:(id /* block */)a2;
- (void)fetchArtwork:(id)a0 withReply:(id /* block */)a1;
- (void)setArtwork:(id)a0 forInfo:(id)a1 forDatabase:(unsigned long long)a2 withReply:(id /* block */)a3;
- (void)setRemoteArtworkForInfo:(id)a0 forDatabase:(unsigned long long)a1 withReply:(id /* block */)a2;
- (void)removeArtwork:(unsigned long long)a0 forUUID:(id)a1 withReply:(id /* block */)a2;
- (void)removeArtworkWithArray:(id)a0 withReply:(id /* block */)a1;
- (void)purgeAllItemsforDatabase:(unsigned long long)a0 withReply:(id /* block */)a1;
- (void)withClientQueue:(id /* block */)a0;
- (BOOL)openDatabase:(unsigned long long)a0 forKind:(unsigned long long)a1 error:(id *)a2;
- (void)closeDatabase:(unsigned long long)a0;
- (void)synchronousFetchArtwork:(id)a0 withReply:(id /* block */)a1;
- (BOOL)disableEventBroadcaster:(id *)a0;
- (BOOL)enableFetchSandboxExtensions:(id *)a0;

@end
