@class NSString;

@interface HKRemoteFeatureAvailabilityDeviceClassEqualsRule : HKRemoteFeatureAvailabilityBaseRule <HKRemoteFeatureAvailabilityRule> {
    NSString *_deviceClass;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)ruleIdentifier;

- (void)processUserInfo:(id)a0;
- (BOOL)evaluate;
- (void).cxx_destruct;

@end
