@class NSArray, NSString;

@interface KNBuildAppearByCharacter : KNBuildAppear <KNAnimationPluginArchiving, KNAnimationPluginObsoleteNames, KNAnimationPluginAlternateArchiving>

@property (class, readonly, nonatomic) NSArray *obsoleteAnimationNames;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)customAttributes;
+ (id)defaultAttributes;
+ (id)animationFilter;
+ (id)animationName;
+ (void)downgradeAttributes:(id *)a0 animationName:(id *)a1 warning:(id *)a2 type:(long long)a3 isToClassic:(char)a4 version:(unsigned long long)a5;
+ (id)localizedAnimationStringForUpgradeWarning:(long long)a0;
+ (unsigned long long)p_legacyDirectionWithDirection:(unsigned long long)a0 type:(long long)a1;
+ (unsigned long long)p_textDeliveryOptionWithDirection:(unsigned long long)a0 type:(long long)a1 isClassic:(char)a2;
+ (char)shouldWarnOnUpgradeWithOldAnimationName:(id)a0 version:(unsigned long long)a1;
+ (void)upgradeAttributes:(id *)a0 animationName:(id)a1 oldAnimationName:(id)a2 warning:(id *)a3 type:(long long)a4 isFromClassic:(char)a5 version:(unsigned long long)a6;


@end
