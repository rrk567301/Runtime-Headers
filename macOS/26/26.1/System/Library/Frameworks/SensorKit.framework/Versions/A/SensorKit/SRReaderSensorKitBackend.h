@class NSString, NSXPCConnection, NSDictionary, SRDatastore;

@interface SRReaderSensorKitBackend : NSObject <SRReaderStorageBackend> {
    SRDatastore *_datastore;
    NSDictionary *_deviceDetails;
    BOOL _connectionDidInvalidate;
    NSString *_sensor;
    NSDictionary *_nextDatastoreFiles;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)clientInterface;
+ (id)remoteInterface;
+ (id)new;
+ (id)connectionToEndpoint;

- (void)setupConnection;
- (void)resetDatastoreFiles:(id)a0;
- (id)datastore;
- (void)dealloc;
- (id)init;
- (void)fetch:(id)a0 withCallback:(id /* block */)a1;
- (void)fetchDevices:(id)a0 reply:(id /* block */)a1;
- (void)fetchReaderMetadata:(id)a0 reply:(id /* block */)a1;
- (id)initWithSensor:(id)a0 xpcConnection:(id)a1;
- (void)startRecording:(id)a0 reply:(id /* block */)a1;
- (void)stopRecording:(id)a0 reply:(id /* block */)a1;

@end
