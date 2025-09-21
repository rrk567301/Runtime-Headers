@interface IMCTSMSUtilities : NSObject

+ (id)IMCountryCodeForPhoneNumber:(id)a0 simID:(id)a1;
+ (char)IMMMSEagerUploadDisabledInCarrierBundleForPhoneNumber:(id)a0 simID:(id)a1;
+ (char)IMMMSEnabledForPhoneNumber:(id)a0 simID:(id)a1;
+ (char)IMMMSGroupTextReplicationSupportedForPhoneNumber:(id)a0 simID:(id)a1;
+ (int)IMMMSMaxImageDimensionForPhoneNumber:(id)a0 simID:(id)a1;
+ (double)IMMMSMaximumAudioDurationForPhoneNumber:(id)a0 simID:(id)a1;
+ (int)IMMMSMaximumSlideCountForPhoneNumber:(id)a0 simID:(id)a1;
+ (char)IMMMSRestrictedModeEnabledForPhoneNumber:(id)a0 simID:(id)a1;
+ (char)IMMMSSupportsH264VideoForPhoneNumber:(id)a0 simID:(id)a1;
+ (char)IMReadDisablePreviewTranscodingQualityOnWRMCarrierValueForPhoneNumber:(id)a0 simID:(id)a1;
+ (char)IMReadEnablePreviewTranscodingQualityCarrierValueForPhoneNumber:(id)a0 simID:(id)a1;
+ (void)IMSynchronizeMMSCapabilityToWatch:(char)a0;
+ (id)IMUniqueIdentifierForPhoneNumber:(id)a0 simID:(id)a1;
+ (void)IMiMessageMaxTransferFileSizeForWifiForPhoneNumber:(unsigned long long *)a0 cellSize:(unsigned long long *)a1 serverConfigurationBag:(id)a2 phoneNumber:(id)a3 simID:(id)a4;
+ (char)SMSAllowCaseSensitiveSenderIDForPhoneNumber:(id)a0;
+ (id)myCTPhoneNumber;
+ (id)IMCountryCodeForSimSlot:(long long)a0;
+ (char)IMIsEagerUploadEnabledForPhoneNumber:(id)a0 simID:(id)a1;
+ (id)IMMMSEmailAddressToMatchForPhoneNumber:(id)a0 simID:(id)a1;
+ (char)IMMMSGroupTextOnlyMessagesSendAsMMSForPhoneNumber:(id)a0 simID:(id)a1;
+ (char)IMMMSGroupTextReplicationSupportsSMILContentLocationForPhoneNumber:(id)a0 simID:(id)a1;
+ (int)IMMMSMaxRecipientsForPhoneNumber:(id)a0 simID:(id)a1;
+ (int)IMMMSMaximumMessageByteCountForPhoneNumber:(id)a0 simID:(id)a1;
+ (double)IMMMSMaximumVideoDurationForPhoneNumber:(id)a0 simID:(id)a1;
+ (char)IMMMSSupportedAndConfiguredForPhoneNumber:(id)a0 simID:(id)a1;
+ (char)IMMessagesFilteringSettingForPreferedSubscription;
+ (id)IMPhoneNumbersEnabledForMultipleSubscriptionDevice;
+ (unsigned long long)IMReadAttachmentPreviewTranscodingQualitySizeCarrierValueForPhoneNumber:(id)a0 simID:(id)a1;
+ (char)IMReadDisablePreviewTranscodingQualityOnWiFiCarrierValueForPhoneNumber:(id)a0 simID:(id)a1;
+ (char)IMReadMMSUserOverrideForPhoneNumber:(id)a0 simID:(id)a1;
+ (char)IMShouldShowMMSEmailAddress:(id)a0 simID:(id)a1;
+ (void)IMSynchronizePreferredSubscriptionMMSCapabilityToWatch;
+ (unsigned long long)IMiMessageMaxTransferAudioFileSizeForWifiForPhoneNumber:(unsigned long long *)a0 cellSize:(unsigned long long *)a1 serverConfigurationBag:(id)a2 phoneNumber:(id)a3 simID:(id)a4;
+ (unsigned long long)IMiMessageMaxTransferVideoFileSizeForWifiForPhoneNumber:(unsigned long long *)a0 cellSize:(unsigned long long *)a1 serverConfigurationBag:(id)a2 phoneNumber:(id)a3 simID:(id)a4;
+ (id)carrierBundleValueForKeyHierarchy:(id)a0 phoneNumber:(id)a1 simID:(id)a2;
+ (id)carrierNameForPhoneNumber:(id)a0;
+ (char)shouldUploadToMMCS:(id)a0;

@end
