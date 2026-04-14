@class NSDictionary, NSString;

@interface CLSEntitlements : NSObject

@property (class, readonly, nonatomic, getter=isDashboardAppProcess) BOOL dashboardAppProcess;

@property (readonly, copy, nonatomic) NSDictionary *entitlements;
@property (readonly, nonatomic) NSString *applicationBundleIdentifier;
@property (readonly, nonatomic) NSString *classKitEnvironment;

+ (id)entitlementsForCurrentTaskWithError:(id *)a0;
+ (id)allowedEntitlements;
+ (id)entitlementsWithSecTask:(struct __SecTask { } *)a0 overrides:(id)a1 error:(id *)a2;
+ (BOOL)isInternalProcess;
+ (BOOL)isPrivateSearchEnabledProcess;
+ (id)entitlementsWithConnection:(id)a0 error:(id *)a1;
+ (BOOL)isSearchEnabledProcess;

- (id)init;
- (void).cxx_destruct;
- (BOOL)hasEntitlement:(id)a0;
- (BOOL)isInternal;
- (BOOL)boolValueForEntitlement:(id)a0 error:(id *)a1;
- (id)initWithEntitlements:(id)a0;
- (id)stringValueForEntitlement:(id)a0 error:(id *)a1;
- (BOOL)isPrivateSearchAPIEnabled;
- (BOOL)isPublicClassKitAPIEnabled;
- (BOOL)isDashboardAPIEnabled;
- (BOOL)isRegisterDashboardEnabled;
- (BOOL)isSearchAPIEnabled;
- (BOOL)isInDevelopmentEnvironment;

@end
