@class NSDictionary, NSString;

@interface CLSEntitlements : NSObject

@property (class, readonly, nonatomic, getter=isDashboardAppProcess) BOOL dashboardAppProcess;

@property (readonly, copy, nonatomic) NSDictionary *entitlements;
@property (readonly, nonatomic) NSString *applicationBundleIdentifier;
@property (readonly, nonatomic) NSString *classKitEnvironment;

+ (id)entitlementsWithConnection:(id)a0 error:(id *)a1;
+ (BOOL)isPrivateSearchEnabledProcess;
+ (BOOL)isSearchEnabledProcess;
+ (id)allowedEntitlements;
+ (id)entitlementsForNonAppCurrentTaskWithError:(id *)a0;
+ (id)entitlementsForCurrentTaskWithError:(id *)a0;
+ (id)entitlementsWithSecTask:(struct __SecTask { } *)a0 overrides:(id)a1 error:(id *)a2;
+ (BOOL)isInternalProcess;

- (id)initWithEntitlements:(id)a0;
- (BOOL)isInternal;
- (BOOL)isUIClient;
- (BOOL)isSearchAPIEnabled;
- (BOOL)isDashboardAPIEnabled;
- (BOOL)isRegisterDashboardEnabled;
- (BOOL)boolValueForEntitlement:(id)a0 error:(id *)a1;
- (BOOL)hasEntitlement:(id)a0;
- (void).cxx_destruct;
- (BOOL)isPublicClassKitAPIEnabled;
- (BOOL)isInDevelopmentEnvironment;
- (BOOL)isPrivateSearchAPIEnabled;
- (id)init;
- (id)stringValueForEntitlement:(id)a0 error:(id *)a1;

@end
