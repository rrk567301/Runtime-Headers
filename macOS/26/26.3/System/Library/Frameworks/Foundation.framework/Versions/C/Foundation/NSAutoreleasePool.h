@interface NSAutoreleasePool : NSObject {
    void *_token;
    void *_reserved3;
    void *_reserved2;
    void *_reserved;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (unsigned long long)poolCountHighWaterMark;
+ (BOOL)autoreleasePoolExists;
+ (unsigned long long)totalAutoreleasedObjects;
+ (void)setPoolCountHighWaterResolution:(unsigned long long)a0;
+ (unsigned long long)topAutoreleasePoolCount;
+ (unsigned long long)autoreleasedObjectCount;
+ (void)addObject:(id)a0;
+ (unsigned long long)poolCountHighWaterResolution;
+ (void)releaseAllPools;
+ (void)enableRelease:(BOOL)a0;
+ (void)resetTotalAutoreleasedObjects;
+ (void)setPoolCountHighWaterMark:(unsigned long long)a0;
+ (void)showPools;
+ (void)enableFreedObjectCheck:(BOOL)a0;

- (void)drain;
- (unsigned long long)retainCount;
- (id)autorelease;
- (id)retain;
- (id)init;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)addObject:(id)a0;
- (void)dealloc;
- (oneway void)release;

@end
