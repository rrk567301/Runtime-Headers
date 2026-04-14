@interface TPSUserTypeChecker : NSObject

+ (long long)userType;
+ (id)_previousBuildVersion;
+ (int)_majorVersionForBuildVersion:(id)a0;
+ (long long)userTypeFromCloudDataWithKey:(id)a0;
+ (long long)userTypeFromMigratorData;
+ (long long)userTypeOverride;

@end
