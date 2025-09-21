@class NSString, CHSExtensionIdentity, NSArray, NSSet, CHSEntitlementCollection;

@interface CHSMutableWidgetExtension : CHSWidgetExtension

@property (copy, nonatomic) CHSExtensionIdentity *identity;
@property (copy, nonatomic) NSString *localizedDisplayName;
@property (copy, nonatomic) NSString *containerBundleLocalizedDisplayName;
@property (copy, nonatomic) NSArray *orderedWidgetDescriptors;
@property (copy, nonatomic) NSArray *orderedControlDescriptors;
@property (copy, nonatomic) NSSet *liveActivityDescriptors;
@property (retain, nonatomic) CHSEntitlementCollection *entitlements;
@property (nonatomic) long long dataProtectionLevel;

- (void)setIdentity:(id)a0;
- (void)setEntitlements:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)setLocalizedDisplayName:(id)a0;
- (void)setContainerBundleLocalizedDisplayName:(id)a0;
- (void)setDataProtectionLevel:(long long)a0;
- (void)setLiveActivityDescriptors:(id)a0;
- (void)setOrderedControlDescriptors:(id)a0;
- (void)setOrderedWidgetDescriptors:(id)a0;

@end
