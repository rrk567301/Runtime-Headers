@class ARAuthorizationRemoteService;

@interface ARAuthorization : NSObject

@property (readonly, nonatomic) ARAuthorizationRemoteService *remoteService;

+ (id)sharedInstance;
+ (void)removeObserver:(id)a0;
+ (id)addObserverUsingBlock:(id /* block */)a0;
+ (void)requestAuthorizationWithTypes:(id)a0 completion:(id /* block */)a1;

- (void).cxx_destruct;
- (id)initPrivate:(id)a0;
- (BOOL)isObserverRegistered:(id)a0;

@end
