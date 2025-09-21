@class NSObject, NSString, NSXPCInterface;
@protocol OS_dispatch_queue;

@interface TKXPCConnectionConfigurationDefault : NSObject <TKXPCConnectionConfiguration>

@property (readonly, nonatomic) id exportedObject;
@property (readonly, nonatomic) NSXPCInterface *exportedInterface;
@property (readonly, nonatomic) NSXPCInterface *remoteObjectInterface;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *replyQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithRemoteObjectInterface:(id)a0 exportedInterface:(id)a1 exportedObject:(id)a2 replyQueue:(id)a3;

@end
