@class NSString, NSMutableSet, _HKEntitlements, _HKXPCAuditToken;

@interface HDXPCProcess : NSObject {
    NSString *_name;
    NSMutableSet *_droppedEntitlements;
}

@property (readonly, nonatomic) _HKEntitlements *entitlements;
@property (readonly, nonatomic) int processIdentifier;
@property (readonly, copy, nonatomic) _HKXPCAuditToken *auditToken;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) char isExtension;
@property (readonly, nonatomic) char isWidgetKitExtension;
@property (readonly, copy, nonatomic) NSString *containerAppBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *applicationIdentifier;

+ (id)currentProcess;
+ (id)processWithConnection:(id)a0 error:(id *)a1;

- (id)description;
- (void).cxx_destruct;
- (id)valueForEntitlement:(id)a0;
- (char)hasEntitlement:(id)a0;
- (void)dropEntitlement:(id)a0;
- (void)restoreEntitlement:(id)a0;
- (char)hasArrayEntitlement:(id)a0 containing:(id)a1;
- (char)hasRequiredArrayEntitlement:(id)a0 containing:(id)a1 error:(id *)a2;
- (char)hasRequiredEntitlement:(id)a0 error:(id *)a1;
- (id)_pluginBundleForCurrentProcess;
- (id)initWithAuditToken:(id)a0 entitlements:(id)a1 isExtension:(char)a2 containerAppBundleIdentifier:(id)a3;
- (id)unitTest_copyProcessWithEntitlements:(id)a0;

@end
