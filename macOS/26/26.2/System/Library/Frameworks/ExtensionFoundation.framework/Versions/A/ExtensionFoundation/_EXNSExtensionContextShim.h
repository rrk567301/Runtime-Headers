@class NSArray;
@protocol NSExtensionRequestHandling;

@interface _EXNSExtensionContextShim : NSExtensionContext <ExtensionFoundation.EXDefaultImplementationXPCProtocol, _EXConnectionHandler> {
    void /* unknown type, empty encoding */ _inputItems;
    void /* unknown type, empty encoding */ response;
    void /* unknown type, empty encoding */ connection;
}

@property (nonatomic, retain) id<NSExtensionRequestHandling> principalObject;
@property (nonatomic, readonly) NSArray *inputItems;

- (id)initWithInputItems:(id)a0 listenerEndpoint:(id)a1 contextUUID:(id)a2;
- (void)cancelRequestWithError:(id)a0;
- (void).cxx_destruct;
- (void)completeRequestReturningItems:(id)a0 completionHandler:(id /* block */)a1;
- (id)init;
- (BOOL)shouldAcceptXPCConnection:(id)a0;
- (id)initWithInputItems:(id)a0 contextUUID:(id)a1;
- (id)initWithInputItems:(id)a0;
- (void)performRequestWithInputItems:(id)a0 response:(id /* block */)a1;

@end
