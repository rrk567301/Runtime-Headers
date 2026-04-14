@interface NSAutoreleasePool : NSObject {
    void *_token;
    void *_reserved3;
    void *_reserved2;
    void *_reserved;
}

+ (void)enableFreedObjectCheck:(BOOL)a0;
+ (void)addObject:(id)a0;
+ (void)setPoolCountHighWaterResolution:(unsigned long long)a0;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)setPoolCountHighWaterMark:(unsigned long long)a0;
+ (unsigned long long)poolCountHighWaterResolution;
+ (void)releaseAllPools;
+ (unsigned long long)totalAutoreleasedObjects;
+ (unsigned long long)autoreleasedObjectCount;
+ (void)enableRelease:(BOOL)a0;
+ (void)resetTotalAutoreleasedObjects;
+ (unsigned long long)poolCountHighWaterMark;
+ (BOOL)autoreleasePoolExists;
+ (unsigned long long)topAutoreleasePoolCount;
+ (void)showPools;

- (void)drain;
- (id)autorelease;
- (void)addObject:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)retain;
- (id)init;
- (oneway void)release;
- (void)dealloc;
- (unsigned long long)retainCount;

@end
