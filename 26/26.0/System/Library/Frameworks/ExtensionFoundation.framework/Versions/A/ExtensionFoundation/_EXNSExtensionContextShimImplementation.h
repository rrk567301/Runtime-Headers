@class _EXSceneSession, NSArray, _EXNSExtensionShimExtension, NSUUID, NSXPCConnection, NSString;

@interface _EXNSExtensionContextShimImplementation : NSObject <_NSExtensionContextInternalImplementation, _EXNSExtensionShimExtensionXPCProtocol>

@property (weak) _EXSceneSession *sceneSession;
@property (weak) _EXNSExtensionShimExtension *extension;
@property (retain) id __principalObject;
@property (readonly, copy) NSArray *inputItems;
@property (readonly, copy) NSUUID *_UUID;
@property (readonly) NSXPCConnection *_auxiliaryConnection;
@property (copy, setter=_setRequestCleanUpBlock:) id /* block */ _requestCleanUpBlock;
@property (readonly) id _principalObject;
@property (readonly) struct { unsigned int val[8]; } _extensionHostAuditToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)makeContextWithSceneSession:(id)a0;

- (id)inputItems;
- (id)makeXPCConnectionWithError:(id *)a0;
- (void)invalidate;
- (id)_principalObject;
- (void)cancelRequestWithError:(id)a0;
- (id)initWithInputItems:(id)a0 listenerEndpoint:(id)a1 contextUUID:(id)a2 extensionContext:(id)a3;
- (void)openURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)completeRequestReturningItems:(id)a0 completionHandler:(id /* block */)a1;
- (id)_auxiliaryConnection;
- (void).cxx_destruct;
- (id)initWithSceneSession:(id)a0;
- (void)beginContextRequest:(id)a0 endpoint:(id)a1 reply:(id /* block */)a2;
- (BOOL)shoudAcceptConnection:(id)a0;

@end
