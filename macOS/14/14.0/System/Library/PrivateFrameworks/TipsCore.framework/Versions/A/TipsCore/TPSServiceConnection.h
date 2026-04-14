@class NSString, _TPSXPCConnection, NSXPCInterface;

@interface TPSServiceConnection : NSObject <_TPSXPCExportable> {
    _TPSXPCConnection *_connection;
}

@property (retain, nonatomic) NSXPCInterface *remoteInterfaceInstance;
@property (retain, nonatomic) NSXPCInterface *exportedInterfaceInstance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)connection;
- (void)invalidate;
- (void)connectionInterrupted;
- (id)exportedInterface;
- (void)connectionInvalidated;
- (id)remoteInterface;

@end
