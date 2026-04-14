@class NSMutableSet, NSObject;
@protocol OS_xpc_object;

@interface CalAgentLinkConnection : NSObject {
    NSMutableSet *_operations;
    NSObject<OS_xpc_object> *_connection;
}

+ (id)sharedInstance;
+ (void)setConnectionForOperation:(id)a0;
+ (void)releaseConnectionForOperation:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_interruptAllOperations;
- (void)_setConnectionForOperation:(id)a0;
- (void)_releaseConnectionForOperation:(id)a0;

@end
