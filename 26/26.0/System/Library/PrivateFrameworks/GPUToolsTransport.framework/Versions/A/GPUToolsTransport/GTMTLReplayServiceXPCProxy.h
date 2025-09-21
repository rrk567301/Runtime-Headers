@class NSMutableDictionary, NSString, GTServiceProperties, NSSet, GTServiceConnection, GTProcessInfo, GTBulkDataServiceXPCProxy;
@protocol GTXPCConnection;

@interface GTMTLReplayServiceXPCProxy : NSObject <GTMTLReplayService> {
    id<GTXPCConnection> _gtXPCConnection;
    GTServiceConnection *_connection;
    NSSet *_ignoreMethods;
    id /* block */ _connectionhandler;
    GTBulkDataServiceXPCProxy *_bulkDataProxy;
    long long _fetchCompressionAlgorithm;
    NSMutableDictionary *_acceleratorStructureSessionToDispatcherId;
    NSMutableDictionary *_observerIdToPort;
    struct GTTpacketStream { } *_tstream;
    unsigned long long _version;
}

@property (readonly, nonatomic) GTProcessInfo *processInfo;
@property (readonly, nonatomic) GTServiceProperties *serviceProperties;
@property (readonly, nonatomic) NSString *deviceUDID;
@property (readonly, nonatomic) unsigned long long servicePort;

- (BOOL)pause:(unsigned long long)a0;
- (BOOL)cancel:(unsigned long long)a0;
- (void)display:(id)a0;
- (unsigned long long)registerObserver:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)update:(id)a0;
- (id)fetch:(id)a0;
- (void).cxx_destruct;
- (void)terminateProcess;
- (BOOL)resume:(unsigned long long)a0;
- (id)decode:(id)a0;
- (BOOL)load:(id)a0 error:(id *)a1;
- (id)query:(id)a0;
- (void)deregisterObserver:(unsigned long long)a0;
- (id)fetchInto:(id)a0;
- (id)profile:(id)a0;
- (id)raytrace:(id)a0;
- (id)shaderdebug:(id)a0;
- (id)initWithConnection:(id)a0 serviceInfo:(id)a1;
- (id)flushRpackets;

@end
