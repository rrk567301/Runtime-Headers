@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface MLRExtensionRemoteContext : NSExtensionContext <MLRExtensionRemoteProtocol> {
    NSObject<OS_dispatch_queue> *_taskExecutionQueue;
    NSObject<OS_dispatch_queue> *_stopQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (id)initWithInputItems:(id)a0 listenerEndpoint:(id)a1 contextUUID:(id)a2;
- (void).cxx_destruct;
- (id)initWithInputItems:(id)a0 listenerEndpoint:(id)a1 contextUUID:(id)a2 plugin:(id)a3;

@end
