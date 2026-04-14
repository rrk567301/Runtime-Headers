@class NSObject;
@protocol OS_xpc_object;

@interface IMRemoteURLConnectionMockScheduler : NSObject {
    NSObject<OS_xpc_object> *_connection;
}

- (void).cxx_destruct;
- (id)init;
- (BOOL)_connect;
- (void)scheduleMockResponse:(id)a0;
- (void)scheduleMockResponse:(id)a0 forURL:(id)a1;

@end
