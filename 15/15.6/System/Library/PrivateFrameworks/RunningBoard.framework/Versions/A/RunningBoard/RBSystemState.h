@class NSMutableSet, NSMutableDictionary;

@interface RBSystemState : NSObject <NSCopying, NSMutableCopying>

@property (readonly, nonatomic) char preventIdleSleep;
@property (readonly, nonatomic) char preventLaunch;
@property (readonly, nonatomic) NSMutableSet *preventIdleSleepIdentifiers;
@property (readonly, copy, nonatomic) NSMutableSet *tags;
@property (readonly, copy, nonatomic) NSMutableSet *preventLaunchPredicates;
@property (readonly, copy, nonatomic) NSMutableSet *allowLaunchPredicates;
@property (readonly, copy, nonatomic) NSMutableDictionary *conditions;
@property (readonly, copy, nonatomic) NSMutableDictionary *prewarmConfiguration;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)_init;

@end
