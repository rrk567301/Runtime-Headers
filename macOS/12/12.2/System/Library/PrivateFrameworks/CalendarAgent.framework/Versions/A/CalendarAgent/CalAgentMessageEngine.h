@class CalAgentOperationMap, NSObject;
@protocol OS_xpc_object;

@interface CalAgentMessageEngine : NSObject

@property (retain, nonatomic) NSObject<OS_xpc_object> *listenerConnection;
@property (retain, nonatomic) CalAgentOperationMap *operationMap;

- (id)description;
- (void).cxx_destruct;
- (void)start;
- (void)handleMessage:(id)a0;
- (void)loadOperationMap;
- (void)handlePeerConnection:(id)a0;
- (void)logConnectionInfo:(id)a0;

@end
