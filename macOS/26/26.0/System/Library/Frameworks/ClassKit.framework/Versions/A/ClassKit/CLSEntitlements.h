@class NSDictionary, NSString;

@interface CLSEntitlements : NSObject

@property (class, readonly, nonatomic, getter=isDashboardAppProcess) BOOL dashboardAppProcess;

@property (readonly, copy, nonatomic) NSDictionary *entitlements;
@property (readonly, nonatomic) NSString *applicationBundleIdentifier;
@property (readonly, nonatomic) NSString *classKitEnvironment;

+ (id)allowedEntitlements;
+ (BOOL)isInternalProcess;
+ (id)entitlementsWithSecTask:(struct __SecTask { } *)a0 overrides:(id)a1 error:(id *)a2;
+ (BOOL)isPrivateSearchEnabledProcess;
+ (id)entitlementsForCurrentTaskWithError:(id *)a0;
+ (id)entitlementsWithConnection:(id)a0 error:(id *)a1;
+ (id)entitlementsForNonAppCurrentTaskWithError:(id *)a0;
+ (BOOL)isSearchEnabledProcess;

- (id)initWithEntitlements:(id)a0;
- (BOOL)isInternal;
- (BOOL)isSearchAPIEnabled;
- (BOOL)hasEntitlement:(id)a0;
- (id)stringValueForEntitlement:(id)a0 error:(id *)a1;
- (BOOL)isRegisterDashboardEnabled;
- (id)init;
- (BOOL)isDashboardAPIEnabled;
- (BOOL)isPrivateSearchAPIEnabled;
- (BOOL)isPublicClassKitAPIEnabled;
- (BOOL)boolValueForEntitlement:(id)a0 error:(id *)a1;
- (BOOL)isUIClient;
- (BOOL)isInDevelopmentEnvironment;
- (void).cxx_destruct;

@end
