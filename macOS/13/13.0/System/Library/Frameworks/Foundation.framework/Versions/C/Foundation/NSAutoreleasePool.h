@interface NSAutoreleasePool : NSObject {
    void *_token;
    void *_reserved3;
    void *_reserved2;
    void *_reserved;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)addObject:(id)a0;
+ (void)showPools;
+ (void)releaseAllPools;
+ (unsigned long long)autoreleasedObjectCount;
+ (unsigned long long)topAutoreleasePoolCount;
+ (BOOL)autoreleasePoolExists;
+ (void)enableRelease:(BOOL)a0;
+ (void)enableFreedObjectCheck:(BOOL)a0;
+ (unsigned long long)poolCountHighWaterMark;
+ (void)setPoolCountHighWaterMark:(unsigned long long)a0;
+ (unsigned long long)poolCountHighWaterResolution;
+ (void)setPoolCountHighWaterResolution:(unsigned long long)a0;
+ (unsigned long long)totalAutoreleasedObjects;
+ (void)resetTotalAutoreleasedObjects;

- (id)retain;
- (oneway void)release;
- (void)dealloc;
- (id)autorelease;
- (unsigned long long)retainCount;
- (id)init;
- (void)addObject:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)drain;

@end
