@interface GKPreferencesSPI : NSObject

+ (void)forceLocalPlayerAgeCategoryToAdult;
+ (void)forceLocalPlayerAgeCategoryToChild;
+ (void)unforceLocalPlayerAgeCategory;

@end
