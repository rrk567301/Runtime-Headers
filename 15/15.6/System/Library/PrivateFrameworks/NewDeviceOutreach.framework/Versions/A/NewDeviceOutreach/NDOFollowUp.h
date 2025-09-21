@protocol NDOFollowUpProvider;

@interface NDOFollowUp : NSObject

@property (retain) id<NDOFollowUpProvider> followUpProvider;

+ (id)allPossibleFollowUpTargetBundleIdentifiers;
+ (id)followUpTargetBundleIDsForDevice:(id)a0;
+ (id)possibleUniqueIdentifiersForSerialNumber:(id)a0;
+ (id)uniqueFollowUpIdentifiersForDevice:(id)a0;
+ (id)uniqueIdentfierForSerialNumber:(id)a0 bundleId:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)dismissFollowUpForSerialNumber:(id)a0;
- (char)_checkConversionEligibilityForDevice:(id)a0;
- (void)_clearFollowUpForSerialNumber:(id)a0;
- (void)_clearFollowUpWithDevices:(id)a0;
- (id)_pendingFollowUpItemsForSerialNumber:(id)a0;
- (char)_postFollowUpWithDevicesInfo:(id)a0 repostAllowed:(char)a1;
- (void)_setupFollowUpItem:(id)a0 withDeviceInfo:(id)a1;
- (id)_setupFollowUpNotificationWithDeviceInfo:(id)a0;
- (void)dismissNotificationForSerialNumber:(id)a0;
- (id)followUpItemsForDeviceInfo:(id)a0;
- (id)followUpSaleFlowSourceForBundleId:(id)a0 device:(id)a1;
- (id)initWithFollowUpProvider:(id)a0;
- (void)migrateLegacyFollowUpIfNeededWithDeviceInfo:(id)a0;
- (unsigned long long)pendingFollowUpCount;
- (void)postFollowUpWithDeviceInfo:(id)a0;
- (char)postFollowUpWithDevicesInfo:(id)a0;
- (id)refreshALLFollowupsWithDeviceInfos:(id)a0 andForcePostFollowup:(char)a1;
- (id)refreshFollowupWithDeviceInfo:(id)a0 andForcePostFollowup:(char)a1;
- (id)refreshFollowupWithDeviceInfos:(id)a0 andForcePostFollowup:(char)a1;
- (id)refreshFollowupWithDeviceInfos:(id)a0 clearUntrackedDeviceFollowups:(char)a1 andForcePostFollowup:(char)a2;

@end
