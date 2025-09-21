@interface MUPoolObject : NSObject {
    MUPoolObject *mPoolPrev;
}

+ (long long)clearPool;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)clearAllPools;
+ (BOOL)clearVars;
+ (struct { Class x0; id x1; id x2; BOOL x3; BOOL x4; } *)poolInfo;
+ (id)pooledClasses;

- (void)purge;
- (oneway void)release;

@end
