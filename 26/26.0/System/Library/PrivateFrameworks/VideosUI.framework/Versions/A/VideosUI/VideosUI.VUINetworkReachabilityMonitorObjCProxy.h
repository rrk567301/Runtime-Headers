@class NSString;

@interface VideosUI.VUINetworkReachabilityMonitorObjCProxy : NSObject

@property (class, nonatomic, readonly) BOOL isNetworkReachable;
@property (class, nonatomic, readonly) NSString *networkReachableUserInfoKey;
@property (class, nonatomic, readonly) NSString *networkReachabilityDidChangeNotificationName;

- (id)init;

@end
