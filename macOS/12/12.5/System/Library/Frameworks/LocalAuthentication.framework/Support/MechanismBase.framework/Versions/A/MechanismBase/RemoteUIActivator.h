@class NSString, NSXPCConnection;
@protocol RemoteUIActivatorDelegate;

@interface RemoteUIActivator : NSObject <RemoteUIActivating> {
    NSXPCConnection *_agentConnection;
}

@property (weak, nonatomic) id<RemoteUIActivatorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
