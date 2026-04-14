@class NSObject;
@protocol OS_xpc_object;

@interface IMRemoteURLConnectionMockScheduler : NSObject {
    NSObject<OS_xpc_object> *_connection;
}

- (BOOL)_connect;
- (void).cxx_destruct;
- (id)init;
- (void)scheduleMockResponse:(id)a0;
- (void)scheduleMockResponse:(id)a0 forURL:(id)a1;

@end
