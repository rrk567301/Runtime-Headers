@class Protocol, NSString, NSXPCConnection, NSXPCInterface, NSObject;
@protocol OS_dispatch_queue;

@interface CESRSpeechProfileAdminXPCServiceBridge : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    Protocol *_serviceProtocol;
    NSString *_machServiceName;
    NSXPCInterface *_serviceInterface;
    unsigned long long _options;
    NSXPCConnection *_serviceConnection;
}

- (void).cxx_destruct;
- (id)init;
- (id)serviceWithErrorHandler:(id /* block */)a0;
- (void)dealloc;
- (id)_getOrCreateXPCServiceConnection;
- (id)initWithServiceProtocol:(id)a0 machServiceName:(id)a1;
- (void)_clearXPCServiceConnectionAndInvalidate:(BOOL)a0;

@end
