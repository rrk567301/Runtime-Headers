@interface TPSUserTypeChecker : NSObject

+ (long long)userType;
+ (id)_previousBuildVersion;
+ (long long)userTypeFromMigratorData;
+ (long long)userTypeFromCloudDataWithKey:(id)a0;
+ (int)_majorVersionForBuildVersion:(id)a0;

@end
