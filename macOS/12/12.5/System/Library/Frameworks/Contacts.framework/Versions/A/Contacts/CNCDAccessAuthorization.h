@interface CNCDAccessAuthorization : NSObject

+ (BOOL)isAccessGranted;
+ (id)sharedAccessGrantedFuture;
+ (id)accessGrantedFuture;
+ (id)resolveFuture:(id)a0;
+ (void)requestAccessWithCompletionHandler:(id /* block */)a0;
+ (BOOL)isAccessGranted:(id *)a0;

@end
