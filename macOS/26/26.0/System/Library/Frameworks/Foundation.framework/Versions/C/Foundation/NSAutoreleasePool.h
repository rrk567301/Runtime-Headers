@interface NSAutoreleasePool : NSObject {
    void *_token;
    void *_reserved3;
    void *_reserved2;
    void *_reserved;
}

+ (void)releaseAllPools;
+ (unsigned long long)poolCountHighWaterMark;
+ (void)setPoolCountHighWaterResolution:(unsigned long long)a0;
+ (void)enableFreedObjectCheck:(BOOL)a0;
+ (unsigned long long)autoreleasedObjectCount;
+ (void)enableRelease:(BOOL)a0;
+ (void)showPools;
+ (void)resetTotalAutoreleasedObjects;
+ (void)addObject:(id)a0;
+ (unsigned long long)totalAutoreleasedObjects;
+ (unsigned long long)poolCountHighWaterResolution;
+ (unsigned long long)topAutoreleasePoolCount;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)setPoolCountHighWaterMark:(unsigned long long)a0;
+ (BOOL)autoreleasePoolExists;

- (id)autorelease;
- (void)drain;
- (void)dealloc;
- (id)retain;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)init;
- (void)addObject:(id)a0;
- (unsigned long long)retainCount;
- (oneway void)release;

@end
