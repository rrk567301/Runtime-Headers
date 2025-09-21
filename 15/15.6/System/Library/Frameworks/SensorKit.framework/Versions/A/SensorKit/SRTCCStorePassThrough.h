@class NSString;

@interface SRTCCStorePassThrough : NSObject <SRTCCStore>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)bundleIdentifiersDisabledForService:(id)a0;
- (id)bundleIdentifiersForService:(id)a0;
- (char)checkAccessForService:(id)a0 auditToken:(struct { unsigned int x0[8]; })a1;
- (id)informationForBundleId:(id)a0;
- (char)isOverriddenForService:(id)a0;
- (long long)preflightAuthorizationStatusForService:(id)a0;
- (void)requestAccessForService:(id)a0 completion:(id /* block */)a1;
- (char)resetService:(id)a0;
- (char)resetService:(id)a0 forBundleId:(id)a1;
- (char)setOverride:(char)a0 forService:(id)a1;
- (char)setValue:(char)a0 forService:(id)a1 bundleId:(id)a2;

@end
