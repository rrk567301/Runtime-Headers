@class NSString, NSXPCConnection;
@protocol RemoteUIActivatorDelegate, LADaemonXPC;

@interface RemoteUIActivator : NSObject <RemoteUIActivating> {
    NSXPCConnection *_agentConnection;
}

@property (class, retain, nonatomic) id<LADaemonXPC> daemon;

@property (weak, nonatomic) id<RemoteUIActivatorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
