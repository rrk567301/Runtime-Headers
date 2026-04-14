@interface ASDRequestBroker : NSObject

+ (id)interface;

- (void)cancelAllRequestsWithErrorHandler:(id /* block */)a0;
- (void)submitRequest:(id)a0 withReplyHandler:(id /* block */)a1;

@end
