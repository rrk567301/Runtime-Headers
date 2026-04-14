@class NSSet;

@interface HMDXPCiCloudSwitchMessagePolicy : HMFMessagePolicy

@property (readonly, copy) NSSet *bundleIdentifiers;

+ (id)policyWithBundleIdentifiers:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithBundleIdentifiers:(id)a0;

@end
