@class NSDictionary, NSError;

@interface VideosUI.VUILocationServiceProxyObjC : NSObject

@property (class, nonatomic, readonly) long long authorizationStatus;

+ (id)lastKnownLocation;
+ (BOOL)requestUserAuthorizationAndReturnError:(id *)a0;
+ (void)retrieveLocationWithCompletionHandler:(void (^)(NSDictionary *, NSError *))a0;

- (id)init;

@end
