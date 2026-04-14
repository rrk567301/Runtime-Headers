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

- (void)invalidate;
- (void)connectionInterrupted;
- (void)connectionInvalidated;
- (id)initWithServiceName:(id)a0;
- (void).cxx_destruct;
- (id)connection;
- (id)remoteInterface;
- (id)exportedInterface;
- (id)init;

@end
