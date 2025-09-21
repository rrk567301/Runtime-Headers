@interface IMSMSFilterCapabilitiesSyncHelper : NSObject

+ (unsigned long long)IMSMSFilterCapabilitiesOptionForFilterSubAction:(long long)a0 action:(long long)a1;
+ (void)storeSMSFilterSyncDeviceParams:(id)a0;
+ (id)fetchFilterExtensionNameForDeviceID:(id)a0;
+ (unsigned long long)fetchSMSFilterCapabilitiesOptions;
+ (unsigned long long)fetchSMSFilterCapabilitiesOptionsForDeviceID:(id)a0;
+ (id)fetchSMSFilterSyncDeviceParams;
+ (char)isSMSFilteringEnabledInSMSFilterCapabilitiesOptions;
+ (char)isSubActionActiveInSMSFilterCapabilitiesOptions:(unsigned long long)a0 subAction:(long long)a1 action:(long long)a2;
+ (char)isValidSMSFilterCapabilitiesOptions:(unsigned long long)a0;
+ (char)isValidSubActionForDeviceID:(id)a0 action:(long long)a1 subAction:(long long)a2;
+ (char)shouldUpdateSMSFilterSyncDeviceParamsForDeviceID:(id)a0 smsFilterCapabilitiesOptions:(unsigned long long)a1 filterExtensionName:(id)a2;
+ (void)storeSMSFilterCapabilitiesOptions:(unsigned long long)a0;
+ (void)updateFilterExtensionName;
+ (void)updateSMSFilterCapabilitiesOptions;
+ (void)updateSMSFilterCapabilitiesOptionsCache;
+ (void)updateSMSFilterCapabilitiesOptionsForDeviceID:(id)a0 smsFilterCapabilitiesOptions:(unsigned long long)a1 filterExtensionName:(id)a2;
+ (void)updateSMSFilterCapabilitiesOptionsForSelf;
+ (void)updateSMSFilterSyncDeviceParamsCache;
+ (void)verifyCurrentRelayDevicesActive:(id)a0;

@end
