@class geo_isolater, OS_dispatch_semaphore;

@interface MNFamiliarRouteAuthorizationChecker : NSObject <CLLocationManagerDelegate> {
    void /* unknown type, empty encoding */ _authorizationStatus;
}

@property (class, nonatomic, readonly) MNFamiliarRouteAuthorizationChecker *shared;
@property (class, nonatomic, readonly) BOOL isEligible;
@property (class, nonatomic, readonly) BOOL tccPrompted;

@property (nonatomic, readonly) geo_isolater *_isolater;
@property (nonatomic, retain) OS_dispatch_semaphore *_semaphore;

+ (void)checkAuthorizationForPurpose:(long long)a0 completionHandler:(void (^)(BOOL))a1;
+ (BOOL)isAuthorizedForPurpose:(long long)a0;

- (id)init;
- (void).cxx_destruct;

@end
