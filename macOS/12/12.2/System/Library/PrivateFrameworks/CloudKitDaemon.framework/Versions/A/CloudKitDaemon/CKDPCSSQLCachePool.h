@class NSMutableDictionary;

@interface CKDPCSSQLCachePool : NSObject

@property (retain, nonatomic) NSMutableDictionary *cachesByPath;
@property (retain, nonatomic) NSMutableDictionary *checkoutsByPath;

+ (id)sharedPool;

- (void).cxx_destruct;
- (id)_init;
- (id)cacheForContainer:(id)a0;
- (void)releaseCache:(id)a0 forContainer:(id)a1;

@end
