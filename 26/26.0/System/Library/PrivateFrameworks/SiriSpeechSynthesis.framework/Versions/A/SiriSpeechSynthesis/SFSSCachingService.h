@class NSCache;

@interface SFSSCachingService : NSObject

@property (retain, nonatomic) NSCache *memoryCache;

+ (id)sharedInstance;

- (void)clear;
- (id)objectForKey:(id)a0;
- (id)init;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;

@end
