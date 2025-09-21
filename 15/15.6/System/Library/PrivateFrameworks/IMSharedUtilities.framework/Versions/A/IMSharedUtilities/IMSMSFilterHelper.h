@interface IMSMSFilterHelper : NSObject

+ (char)IDSDeviceSupportsIncomingSMSRelayFilteringForDeviceType:(long long)a0;
+ (id)filterLabelForAction:(long long)a0 subAction:(long long)a1;
+ (unsigned long long)conversationFilterModeForMessageFilter:(unsigned long long)a0;
+ (id)fetchSMSFilterExtensionParams;
+ (id)fetchSMSFilterParamForCategory:(long long)a0 subCategory:(long long)a1;
+ (long long)filterActionForCategory:(long long)a0;
+ (long long)filterSubActionForCategory:(long long)a0 subCategory:(long long)a1;
+ (char)isValidActiveFilterAction:(long long)a0 subAction:(long long)a1;
+ (id)smsFilterParamForFilterMode:(unsigned long long)a0;
+ (char)supportsIncomingSMSRelayFiltering;
+ (void)updateSMSFilterExtensionParams;

@end
