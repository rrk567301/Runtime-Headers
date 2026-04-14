@interface TSCH3DSharegroupPoolSharegroupToken : TSCH3DSharegroupToken <NSCopying>

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)token;
+ (id)_singletonAlloc;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isOneShot;
- (void)releaseSharegroup:(id)a0;
- (BOOL)shouldGarbageCollect;
- (id)tokenSharegroup;
- (void)didRemoveAllInterests;
- (void)deleteTokenSharegroup;
- (void)flushTokenSharegroup;

@end
