@class NSArray;
@protocol NSExtensionRequestHandling;

@interface _EXExtensionContext : NSExtensionContext <_EXConnectionHandler>

@property (retain) id<NSExtensionRequestHandling> principalObject;
@property (copy) NSArray *inputItems;

- (void)invalidate;
- (id)makeXPCConnectionWithError:(id *)a0;
- (void).cxx_destruct;
- (void)completeRequestReturningItems:(id)a0 completionHandler:(id /* block */)a1;
- (id)init;
- (BOOL)shouldAcceptXPCConnection:(id)a0;
- (void)completeRequestWithHandler:(id /* block */)a0;

@end
