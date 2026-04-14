@interface NSAutoreleasePool : NSObject {
    void *_token;
    void *_reserved3;
    void *_reserved2;
    void *_reserved;
}

+ (void)showPools;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (unsigned long long)totalAutoreleasedObjects;
+ (void)enableRelease:(BOOL)a0;
+ (void)resetTotalAutoreleasedObjects;
+ (unsigned long long)topAutoreleasePoolCount;
+ (void)setPoolCountHighWaterMark:(unsigned long long)a0;
+ (unsigned long long)autoreleasedObjectCount;
+ (BOOL)autoreleasePoolExists;
+ (void)setPoolCountHighWaterResolution:(unsigned long long)a0;
+ (void)releaseAllPools;
+ (void)addObject:(id)a0;
+ (void)enableFreedObjectCheck:(BOOL)a0;
+ (unsigned long long)poolCountHighWaterResolution;
+ (unsigned long long)poolCountHighWaterMark;

- (id)retain;
- (void)drain;
- (id)initWithCapacity:(unsigned long long)a0;
- (oneway void)release;
- (unsigned long long)retainCount;
- (void)dealloc;
- (id)autorelease;
- (void)addObject:(id)a0;
- (id)init;

@end
