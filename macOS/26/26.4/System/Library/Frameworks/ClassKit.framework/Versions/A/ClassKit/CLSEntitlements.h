@class NSDictionary, NSString;

@interface CLSEntitlements : NSObject

@property (class, readonly, nonatomic, getter=isDashboardAppProcess) BOOL dashboardAppProcess;

@property (readonly, copy, nonatomic) NSDictionary *entitlements;
@property (readonly, nonatomic) NSString *applicationBundleIdentifier;
@property (readonly, nonatomic) NSString *classKitEnvironment;

+ (id)entitlementsWithSecTask:(struct __SecTask { } *)a0 overrides:(id)a1 error:(id *)a2;
+ (id)entitlementsForNonAppCurrentTaskWithError:(id *)a0;
+ (BOOL)isPrivateSearchEnabledProcess;
+ (BOOL)isSearchEnabledProcess;
+ (id)allowedEntitlements;
+ (id)entitlementsForCurrentTaskWithError:(id *)a0;
+ (BOOL)isInternalProcess;
+ (id)entitlementsWithConnection:(id)a0 error:(id *)a1;

- (id)initWithEntitlements:(id)a0;
- (BOOL)isInternal;
- (BOOL)isRegisterDashboardEnabled;
- (BOOL)isDashboardAPIEnabled;
- (BOOL)boolValueForEntitlement:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)isPublicClassKitAPIEnabled;
- (id)stringValueForEntitlement:(id)a0 error:(id *)a1;
- (BOOL)isPrivateSearchAPIEnabled;
- (id)init;
- (BOOL)hasEntitlement:(id)a0;
- (BOOL)isSearchAPIEnabled;
- (BOOL)isInDevelopmentEnvironment;

@end
