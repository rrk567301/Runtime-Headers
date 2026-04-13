@class NSMutableSet;

@interface RBSystemState : NSObject <NSCopying, NSMutableCopying>

@property (readonly, nonatomic) BOOL preventIdleSleep;
@property (readonly, nonatomic) BOOL preventLaunch;
@property (readonly, nonatomic) NSMutableSet *preventIdleSleepIdentifiers;
@property (readonly, copy, nonatomic) NSMutableSet *tags;
@property (readonly, copy, nonatomic) NSMutableSet *preventLaunchPredicates;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)_init;

@end
