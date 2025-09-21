@interface CNCDAccessAuthorization : NSObject

+ (char)isAccessGranted;
+ (id)accessGrantedFuture;
+ (char)isAccessGranted:(id *)a0;
+ (void)requestAccessWithCompletionHandler:(id /* block */)a0;
+ (id)resolveFuture:(id)a0;
+ (id)sharedAccessGrantedFuture;

@end
