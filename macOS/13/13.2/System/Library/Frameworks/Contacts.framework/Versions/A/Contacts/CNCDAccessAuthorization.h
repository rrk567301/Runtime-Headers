@interface CNCDAccessAuthorization : NSObject

+ (BOOL)isAccessGranted;
+ (void)requestAccessWithCompletionHandler:(id /* block */)a0;
+ (BOOL)isAccessGranted:(id *)a0;
+ (id)sharedAccessGrantedFuture;
+ (id)accessGrantedFuture;
+ (id)resolveFuture:(id)a0;

@end
