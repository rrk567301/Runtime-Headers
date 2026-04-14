@class NSMutableArray, NSObject;
@protocol OS_xpc_object;

@interface NSObtainingEndpointState : NSObject {
    NSMutableArray *errors;
    NSObject<OS_xpc_object> *connection;
    NSObject<OS_xpc_object> *listenerName;
    NSObject<OS_xpc_object> *message;
}

- (void)dealloc;
- (void)addError:(const char *)a0 forListenerNamed:(id)a1 fromServiceNamed:(id)a2;

@end
