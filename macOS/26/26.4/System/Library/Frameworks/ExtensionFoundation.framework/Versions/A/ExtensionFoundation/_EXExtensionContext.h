@class NSArray;
@protocol NSExtensionRequestHandling;

@interface _EXExtensionContext : NSExtensionContext <_EXConnectionHandler>

@property (retain) id<NSExtensionRequestHandling> principalObject;
@property (copy) NSArray *inputItems;

- (BOOL)shouldAcceptXPCConnection:(id)a0;
- (void)completeRequestReturningItems:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)invalidate;
- (id)init;
- (id)makeXPCConnectionWithError:(id *)a0;
- (void)completeRequestWithHandler:(id /* block */)a0;

@end
