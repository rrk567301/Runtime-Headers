@class NSDictionary, NSString;

@interface CLSEntitlements : NSObject

@property (class, readonly, nonatomic, getter=isDashboardAppProcess) BOOL dashboardAppProcess;

@property (readonly, copy, nonatomic) NSDictionary *entitlements;
@property (readonly, nonatomic) NSString *applicationBundleIdentifier;
@property (readonly, nonatomic) NSString *classKitEnvironment;

+ (id)allowedEntitlements;
+ (id)entitlementsWithSecTask:(struct __SecTask { } *)a0 overrides:(id)a1 error:(id *)a2;
+ (id)entitlementsForNonAppCurrentTaskWithError:(id *)a0;
+ (id)entitlementsWithConnection:(id)a0 error:(id *)a1;
+ (BOOL)isSearchEnabledProcess;
+ (BOOL)isInternalProcess;
+ (id)entitlementsForCurrentTaskWithError:(id *)a0;
+ (BOOL)isPrivateSearchEnabledProcess;

- (BOOL)isRegisterDashboardEnabled;
- (id)initWithEntitlements:(id)a0;
- (BOOL)isInternal;
- (BOOL)boolValueForEntitlement:(id)a0 error:(id *)a1;
- (BOOL)isInDevelopmentEnvironment;
- (BOOL)isDashboardAPIEnabled;
- (BOOL)isSearchAPIEnabled;
- (BOOL)isPrivateSearchAPIEnabled;
- (void).cxx_destruct;
- (id)stringValueForEntitlement:(id)a0 error:(id *)a1;
- (BOOL)isPublicClassKitAPIEnabled;
- (BOOL)isUIClient;
- (id)init;
- (BOOL)hasEntitlement:(id)a0;

@end
