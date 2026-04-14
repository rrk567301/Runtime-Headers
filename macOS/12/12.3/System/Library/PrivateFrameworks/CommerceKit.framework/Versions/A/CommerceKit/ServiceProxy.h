@interface ServiceProxy : NSObject

+ (id)commerceService;
+ (id)commerceSynchronousService;
+ (id)commerceServiceWithErrorHandler:(id /* block */)a0;
+ (id)_commerceConnection;
+ (id)commerceSynchronousServiceWithErrorHandler:(id /* block */)a0;
+ (id)commerceServiceInterface;
+ (id)commerceClientInterface;
+ (id)commerceClient;

@end
