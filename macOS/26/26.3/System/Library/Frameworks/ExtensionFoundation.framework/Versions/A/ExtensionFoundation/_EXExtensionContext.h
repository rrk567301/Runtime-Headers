@class NSArray;
@protocol NSExtensionRequestHandling;

@interface _EXExtensionContext : NSExtensionContext <_EXConnectionHandler>

@property (retain) id<NSExtensionRequestHandling> principalObject;
@property (copy) NSArray *inputItems;

- (void)invalidate;
- (BOOL)shouldAcceptXPCConnection:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)makeXPCConnectionWithError:(id *)a0;
- (void)completeRequestReturningItems:(id)a0 completionHandler:(id /* block */)a1;
- (void)completeRequestWithHandler:(id /* block */)a0;

@end
