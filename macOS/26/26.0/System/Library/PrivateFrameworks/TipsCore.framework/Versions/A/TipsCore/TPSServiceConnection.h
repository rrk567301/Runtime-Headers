@class NSString, _TPSXPCConnection, NSXPCInterface;

@interface TPSServiceConnection : NSObject <_TPSXPCExportable> {
    _TPSXPCConnection *_connection;
}

@property (copy, nonatomic) NSString *serviceName;
@property (retain, nonatomic) NSXPCInterface *remoteInterfaceInstance;
@property (retain, nonatomic) NSXPCInterface *exportedInterfaceInstance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)exportedInterface;
- (void)invalidate;
- (void)connectionInvalidated;
- (id)init;
- (void)connectionInterrupted;
- (id)initWithServiceName:(id)a0;
- (id)remoteInterface;
- (id)connection;
- (void).cxx_destruct;

@end
