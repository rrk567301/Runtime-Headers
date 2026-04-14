@interface NSAutoreleasePool : NSObject {
    void *_token;
    void *_reserved3;
    void *_reserved2;
    void *_reserved;
}

+ (unsigned long long)autoreleasedObjectCount;
+ (void)releaseAllPools;
+ (void)setPoolCountHighWaterResolution:(unsigned long long)a0;
+ (void)enableFreedObjectCheck:(BOOL)a0;
+ (unsigned long long)topAutoreleasePoolCount;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)enableRelease:(BOOL)a0;
+ (void)showPools;
+ (BOOL)autoreleasePoolExists;
+ (void)addObject:(id)a0;
+ (void)resetTotalAutoreleasedObjects;
+ (void)setPoolCountHighWaterMark:(unsigned long long)a0;
+ (unsigned long long)poolCountHighWaterMark;
+ (unsigned long long)poolCountHighWaterResolution;
+ (unsigned long long)totalAutoreleasedObjects;

- (void)drain;
- (id)retain;
- (unsigned long long)retainCount;
- (id)autorelease;
- (void)addObject:(id)a0;
- (oneway void)release;
- (id)init;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)dealloc;

@end
