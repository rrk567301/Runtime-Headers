@class NSString, NSXPCConnection;
@protocol LACAgentProxyXPC;

@interface DaemonProxy : NSObject <LACAgentProxyXPCWrapperDelegate> {
    id<LACAgentProxyXPC> _agentProxy;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
