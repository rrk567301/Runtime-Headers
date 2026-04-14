@class NSObject;
@protocol OS_xpc_object;

@interface IMRemoteURLConnectionMockScheduler : NSObject {
    NSObject<OS_xpc_object> *_connection;
}

- (id)init;
- (BOOL)_connect;
- (void).cxx_destruct;
- (void)scheduleMockResponse:(id)a0;
- (void)scheduleMockResponse:(id)a0 forURL:(id)a1;

@end
