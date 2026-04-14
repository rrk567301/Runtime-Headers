@class NSArray;
@protocol NSExtensionRequestHandling;

@interface _EXExtensionContext : NSExtensionContext <_EXConnectionHandler>

@property (retain) id<NSExtensionRequestHandling> principalObject;
@property (copy) NSArray *inputItems;

- (id)makeXPCConnectionWithError:(id *)a0;
- (void)invalidate;
- (BOOL)shouldAcceptXPCConnection:(id)a0;
- (id)init;
- (void)completeRequestReturningItems:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)completeRequestWithHandler:(id /* block */)a0;

@end
