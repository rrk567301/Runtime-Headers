@class NSArray;
@protocol NSExtensionRequestHandling;

@interface _EXExtensionContext : NSExtensionContext <_EXConnectionHandler>

@property (retain) id<NSExtensionRequestHandling> principalObject;
@property (copy) NSArray *inputItems;

- (void)invalidate;
- (void)completeRequestReturningItems:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)shouldAcceptXPCConnection:(id)a0;
- (id)makeXPCConnectionWithError:(id *)a0;
- (void).cxx_destruct;
- (id)init;
- (void)completeRequestWithHandler:(id /* block */)a0;

@end
