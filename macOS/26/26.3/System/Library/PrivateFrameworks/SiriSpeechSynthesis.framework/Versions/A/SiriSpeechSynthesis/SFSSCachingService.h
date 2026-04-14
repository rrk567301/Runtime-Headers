@class NSCache;

@interface SFSSCachingService : NSObject

@property (retain, nonatomic) NSCache *memoryCache;

+ (id)sharedInstance;

- (void)clear;
- (id)objectForKey:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKey:(id)a1;

@end
