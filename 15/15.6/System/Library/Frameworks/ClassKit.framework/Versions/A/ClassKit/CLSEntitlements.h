@class NSDictionary, NSString;

@interface CLSEntitlements : NSObject

@property (class, readonly, nonatomic, getter=isDashboardAppProcess) char dashboardAppProcess;

@property (readonly, copy, nonatomic) NSDictionary *entitlements;
@property (readonly, nonatomic) NSString *applicationBundleIdentifier;
@property (readonly, nonatomic) NSString *classKitEnvironment;

+ (id)allowedEntitlements;
+ (id)entitlementsForCurrentTaskWithError:(id *)a0;
+ (id)entitlementsForNonAppCurrentTaskWithError:(id *)a0;
+ (id)entitlementsWithConnection:(id)a0 error:(id *)a1;
+ (id)entitlementsWithSecTask:(struct __SecTask { } *)a0 overrides:(id)a1 error:(id *)a2;
+ (char)isInternalProcess;
+ (char)isPrivateSearchEnabledProcess;
+ (char)isSearchEnabledProcess;

- (id)init;
- (void).cxx_destruct;
- (char)hasEntitlement:(id)a0;
- (char)isInternal;
- (char)boolValueForEntitlement:(id)a0 error:(id *)a1;
- (id)initWithEntitlements:(id)a0;
- (char)isDashboardAPIEnabled;
- (char)isInDevelopmentEnvironment;
- (char)isPrivateSearchAPIEnabled;
- (char)isPublicClassKitAPIEnabled;
- (char)isRegisterDashboardEnabled;
- (char)isSearchAPIEnabled;
- (char)isUIClient;
- (id)stringValueForEntitlement:(id)a0 error:(id *)a1;

@end
