@class NSData, LNAction, NSXPCListenerEndpoint;

@interface LNXPCListenerEndpointContainer : NSObject {
    void /* function */ auditTokenData;
}

@property (nonatomic, retain) NSXPCListenerEndpoint *listenerEndpoint;
@property (nonatomic, copy) NSData *auditTokenData;
@property (nonatomic, retain) LNAction *resolvedAction;

- (void).cxx_destruct;
- (id)init;

@end
