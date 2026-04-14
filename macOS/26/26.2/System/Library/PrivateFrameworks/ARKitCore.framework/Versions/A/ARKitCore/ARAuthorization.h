@class ARAuthorizationRemoteService;

@interface ARAuthorization : NSObject

@property (readonly, nonatomic) ARAuthorizationRemoteService *remoteService;

+ (id)sharedInstance;
+ (void)removeObserver:(id)a0;
+ (void)activateAuthorizationsInClient:(id)a0;
+ (id)addObserverUsingBlock:(id /* block */)a0;
+ (BOOL)authorizationTypeIsPublic:(id)a0;
+ (BOOL)authorizationTypeNeedsClientSideTCCAcquisition:(id)a0;
+ (void)requestAuthorizationWithTypes:(id)a0 completion:(id /* block */)a1;
+ (struct __CFString { } *)tccServiceNameForPublicAuthorizationType:(id)a0;

- (void).cxx_destruct;
- (id)initPrivate:(id)a0;
- (BOOL)isObserverRegistered:(id)a0;

@end
