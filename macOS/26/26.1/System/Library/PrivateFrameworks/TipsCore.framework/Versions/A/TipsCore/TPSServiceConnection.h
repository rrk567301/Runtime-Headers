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

- (void)connectionInterrupted;
- (void)connectionInvalidated;
- (id)connection;
- (id)exportedInterface;
- (void)invalidate;
- (id)initWithServiceName:(id)a0;
- (id)remoteInterface;
- (void).cxx_destruct;
- (id)init;

@end
