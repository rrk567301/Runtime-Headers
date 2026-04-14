@class NSMutableSet, NSMutableDictionary;

@interface RBSystemState : NSObject <NSCopying, NSMutableCopying>

@property (readonly, nonatomic) BOOL preventIdleSleep;
@property (readonly, nonatomic) BOOL preventLaunch;
@property (readonly, nonatomic) NSMutableSet *preventIdleSleepIdentifiers;
@property (readonly, copy, nonatomic) NSMutableSet *tags;
@property (readonly, copy, nonatomic) NSMutableSet *preventLaunchPredicates;
@property (readonly, copy, nonatomic) NSMutableDictionary *conditions;
@property (readonly, copy, nonatomic) NSMutableDictionary *prewarmConfiguration;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)_init;
- (void).cxx_destruct;

@end
