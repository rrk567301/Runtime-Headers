@class NSDictionary, NSString;

@interface CLSEntitlements : NSObject

@property (class, readonly, nonatomic, getter=isDashboardAppProcess) BOOL dashboardAppProcess;

@property (readonly, copy, nonatomic) NSDictionary *entitlements;
@property (readonly, nonatomic) NSString *applicationBundleIdentifier;
@property (readonly, nonatomic) NSString *classKitEnvironment;

+ (BOOL)isSearchEnabledProcess;
+ (id)entitlementsWithSecTask:(struct __SecTask { } *)a0 overrides:(id)a1 error:(id *)a2;
+ (BOOL)isPrivateSearchEnabledProcess;
+ (id)entitlementsWithConnection:(id)a0 error:(id *)a1;
+ (id)entitlementsForCurrentTaskWithError:(id *)a0;
+ (id)allowedEntitlements;
+ (BOOL)isInternalProcess;
+ (id)entitlementsForNonAppCurrentTaskWithError:(id *)a0;

- (id)initWithEntitlements:(id)a0;
- (BOOL)isPrivateSearchAPIEnabled;
- (BOOL)isInDevelopmentEnvironment;
- (BOOL)isInternal;
- (BOOL)hasEntitlement:(id)a0;
- (BOOL)isDashboardAPIEnabled;
- (id)stringValueForEntitlement:(id)a0 error:(id *)a1;
- (id)init;
- (BOOL)isRegisterDashboardEnabled;
- (BOOL)isPublicClassKitAPIEnabled;
- (BOOL)isUIClient;
- (void).cxx_destruct;
- (BOOL)isSearchAPIEnabled;
- (BOOL)boolValueForEntitlement:(id)a0 error:(id *)a1;

@end
