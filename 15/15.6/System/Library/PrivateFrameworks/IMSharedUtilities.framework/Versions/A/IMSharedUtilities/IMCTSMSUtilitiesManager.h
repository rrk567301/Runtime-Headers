@interface IMCTSMSUtilitiesManager : NSObject

@property (nonatomic) int mmsEnabledToken;
@property (nonatomic) int rcsEnabledToken;

+ (id)sharedManager;

- (id)init;
- (id)myCTPhoneNumber;
- (char)mmsEnabledForPhoneNumber:(id)a0 simID:(id)a1;
- (id)carrierBundleValueForKeyHierarchy:(id)a0 phoneNumber:(id)a1 simID:(id)a2;
- (id)carrierNameForPhoneNumber:(id)a0;
- (id)countryCodeForPhoneNumber:(id)a0 simID:(id)a1;
- (id)countryCodeForSimSlot:(long long)a0;
- (unsigned long long)iMessageMaxTransferAudioFileSizeForWifiForPhoneNumber:(unsigned long long *)a0 cellSize:(unsigned long long *)a1 serverConfigurationBag:(id)a2 phoneNumber:(id)a3 simID:(id)a4;
- (void)iMessageMaxTransferFileSizeForWifiForPhoneNumber:(unsigned long long *)a0 cellSize:(unsigned long long *)a1 serverConfigurationBag:(id)a2 phoneNumber:(id)a3 simID:(id)a4;
- (unsigned long long)iMessageMaxTransferVideoFileSizeForWifiForPhoneNumber:(unsigned long long *)a0 cellSize:(unsigned long long *)a1 serverConfigurationBag:(id)a2 phoneNumber:(id)a3 simID:(id)a4;
- (char)isEagerUploadEnabledForPhoneNumber:(id)a0 simID:(id)a1;
- (char)messagesFilteringSettingForPreferedSubscription;
- (char)mmsDefaultEnabledForPhoneNumber:(id)a0 simID:(id)a1;
- (char)mmsEagerUploadDisabledInCarrierBundleForPhoneNumber:(id)a0 simID:(id)a1;
- (id)mmsEmailAddressToMatchForPhoneNumber:(id)a0 simID:(id)a1;
- (char)mmsGroupTextOnlyMessagesSendAsMMSForPhoneNumber:(id)a0 simID:(id)a1;
- (char)mmsGroupTextReplicationSupportedForPhoneNumber:(id)a0 simID:(id)a1;
- (char)mmsGroupTextReplicationSupportsSMILContentLocationForPhoneNumber:(id)a0 simID:(id)a1;
- (int)mmsMaxImageDimensionForPhoneNumber:(id)a0 simID:(id)a1;
- (int)mmsMaxRecipientsForPhoneNumber:(id)a0 simID:(id)a1;
- (double)mmsMaximumAudioDurationForPhoneNumber:(id)a0 simID:(id)a1;
- (double)mmsMaximumDurationWithPreset:(id)a0 phoneNumber:(id)a1 simID:(id)a2;
- (int)mmsMaximumMessageByteCountForPhoneNumber:(id)a0 simID:(id)a1;
- (int)mmsMaximumSlideCountForPhoneNumber:(id)a0 simID:(id)a1;
- (double)mmsMaximumVideoDurationForPhoneNumber:(id)a0 simID:(id)a1;
- (char)mmsRestrictedModeEnabledForPhoneNumber:(id)a0 simID:(id)a1;
- (char)mmsRestrictedModeEnabledForPhoneNumber:(id)a0 simID:(id)a1 reset:(char)a2;
- (char)mmsSupportedAndConfiguredForPhoneNumber:(id)a0 simID:(id)a1;
- (char)mmsSupportsH264VideoForPhoneNumber:(id)a0 simID:(id)a1;
- (id)phoneNumbersEnabledForMultipleSubscriptionDevice;
- (unsigned long long)readAttachmentPreviewTranscodingQualitySizeCarrierValueForPhoneNumber:(id)a0 simID:(id)a1;
- (char)readDisablePreviewTranscodingQualityOnWRMCarrierValueForPhoneNumber:(id)a0 simID:(id)a1;
- (char)readDisablePreviewTranscodingQualityOnWiFiCarrierValueForPhoneNumber:(id)a0 simID:(id)a1;
- (char)readEnablePreviewTranscodingQualityCarrierValueForPhoneNumber:(id)a0 simID:(id)a1;
- (char)readMMSUserOverrideForPhoneNumber:(id)a0 simID:(id)a1;
- (void)registerServiceCapabilityNotifications;
- (char)shouldShowMMSEmailAddress:(id)a0 simID:(id)a1;
- (char)shouldUploadToMMCS:(id)a0;
- (char)smsAllowCaseSensitiveSenderIDForPhoneNumber:(id)a0;
- (void)synchronizeMMSCapabilityToWatch:(char)a0;
- (void)synchronizePreferredSubscriptionMMSCapabilityToWatch;
- (id)uniqueIdentifierForPhoneNumber:(id)a0 simID:(id)a1;

@end
