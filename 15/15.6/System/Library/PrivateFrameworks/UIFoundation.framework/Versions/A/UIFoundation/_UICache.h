@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface _UICache : NSObject {
    NSObject<OS_dispatch_queue> *_cacheQueue;
    NSMutableDictionary *_cache;
    NSObject<OS_dispatch_source> *_memoryWarningsSource;
    char _clearsCacheOnLowMemoryWarnings;
    char _clearsCacheOnApplicationBackground;
    id _noteObserver;
}

@property (nonatomic) char clearsCacheOnLowMemoryWarnings;
@property (nonatomic) char clearsCacheOnApplicationBackground;

- (void)dealloc;
- (id)init;
- (id)objectForKey:(id)a0;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)cacheKeys;
- (id)retainedObjectForKey:(id)a0;

@end
