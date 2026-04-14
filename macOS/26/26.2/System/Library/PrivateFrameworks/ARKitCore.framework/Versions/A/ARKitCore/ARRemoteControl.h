@class NSString, NSXPCConnection, NSXPCInterface, ARWeakReference;
@protocol ARControlProtocol, ARRemoteControlDelegate;

@interface ARRemoteControl : NSObject <ARRemoteControlProtocol> {
    NSXPCConnection *_connection;
    ARWeakReference *_exportedObjectWeakReference;
}

@property (class, readonly, nonatomic) NSString *serviceName;
@property (class, readonly, nonatomic) NSXPCInterface *controlProxyInterface;
@property (class, readonly, nonatomic) NSXPCInterface *controlInterface;

@property (readonly, nonatomic) id<ARControlProtocol> control;
@property (readonly, nonatomic) id<ARControlProtocol> syncControl;
@property (weak, nonatomic) id<ARRemoteControlDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (void)interruptionHandler;
- (id)initWithEndpoint:(id)a0;
- (void).cxx_destruct;
- (void)invalidationHandler;
- (id)init;
- (void)dealloc;
- (id)initWithEndpoint:(id)a0 fixedPriorityQueueForXPC:(BOOL)a1;
- (id)initWithFixedPriorityQueueForXPC:(BOOL)a0;

@end
