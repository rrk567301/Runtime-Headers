@interface OSPNetworkReachability : NSObject

+ (BOOL)networkReachable;
+ (BOOL)_isReachableWithFlags:(unsigned int)a0;
+ (BOOL)networkReachableWithTargetURL:(id)a0;

@end
