@interface ServiceProxy : NSObject

+ (id)commerceServiceInterface;
+ (id)commerceService;
+ (id)commerceServiceWithErrorHandler:(id /* block */)a0;
+ (id)commerceSynchronousService;
+ (id)commerceSynchronousServiceWithErrorHandler:(id /* block */)a0;
+ (id)_commerceConnection;
+ (id)commerceClientInterface;
+ (id)commerceClient;

@end
