@interface FRStoreReachability : NSObject {
    struct __SCNetworkReachability { } *_reachRef;
}

+ (id)sharedInstance;
+ (BOOL)isStoreReachable;

- (void)dealloc;
- (id)init;
- (BOOL)_isReachableWithFlags:(unsigned int)a0;
- (BOOL)_isStoreReachable;

@end
