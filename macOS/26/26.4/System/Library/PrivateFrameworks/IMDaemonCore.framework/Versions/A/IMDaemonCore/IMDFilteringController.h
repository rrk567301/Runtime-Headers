@class NSMutableDictionary, NSArray, NSMutableSet, IMDService, NSObject, NSString;
@protocol IMDIdentityLookupDecisioningManaging, IMDRelayPushHandling, IMDTrustKitDecisioningManaging, IMDCommunicationTrustManaging, OS_dispatch_queue, IMSyncedSettingsManaging;

@interface IMDFilteringController : NSObject <IMDRelayPushHandlerListener>

@property (nonatomic) BOOL hasSpamExtensionUpdated;
@property (retain, nonatomic) NSMutableDictionary *spamBlockMap;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue;
@property (retain, nonatomic) id<IMSyncedSettingsManaging> syncedSettingsManager;
@property (retain, nonatomic) NSMutableSet *pendingPriorityMessageGUIDs;
@property (retain, nonatomic) id<IMDIdentityLookupDecisioningManaging> identityLookupDecisioningManager;
@property (retain, nonatomic) id<IMDCommunicationTrustManaging> communicationTrustManager;
@property (retain, nonatomic) id<IMDRelayPushHandling> relayPushHandler;
@property (retain, nonatomic) id<IMDTrustKitDecisioningManaging> trustKitDecisioningManager;
@property (readonly, nonatomic) IMDService *service;
@property (readonly, nonatomic) NSArray *accounts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)account;
- (void).cxx_destruct;
- (void)relayPriorityMessageFor:(id)a0;
- (void)_removeAppliedPriorityMessages:(id)a0;
- (unsigned long long)actionTypeFrom:(long long)a0;
- (id)relayController;
- (BOOL)_areAllParticipantsUnknown:(id)a0 fromSender:(id)a1;
- (void)_categorizeRelayMessageWithCategory:(long long)a0 subCategory:(long long)a1 deviceID:(id)a2 completion:(id /* block */)a3;
- (void)_checkAndUpdateFilterParamsForFilterExtension;
- (void)_checkAndUpdateSMSFilteringSettingsForDeviceID:(id)a0 smsFilterCapabilitiesOptions:(unsigned long long)a1 filterExtensionName:(id)a2;
- (void)_checkAndUpdateSMSSpamFilterExtensionForUnregisteredOrUpdatedPlugins:(id)a0 arePluginsRegistered:(BOOL)a1;
- (void)_checkIfMessageIsSpam:(id)a0 fromSender:(id)a1 withGuid:(id)a2 receiverISOCountryCode:(id)a3 receivedViaRelay:(BOOL)a4 containsOneTimeCode:(BOOL)a5;
- (void)_clearSpamMapForMessageGUID:(id)a0;
- (void)_configureSyncedDefaultsWithOverride:(BOOL)a0;
- (id)_createNewChatIdentifierFromChatIdentifier:(id)a0 andCategoryLabel:(id)a1;
- (void)_disableSpamFiltering;
- (void)_disableSpamFilteringAndRelay;
- (void)_enableSpamFiltering;
- (void)_executeSpamCompletionBlockForMessageGuid:(id)a0 category:(long long)a1 subCategory:(long long)a2 filterExtensionMetadata:(id)a3 receivedViaRelay:(BOOL)a4 spamDetectionSource:(long long)a5;
- (id)_getSpamExtensionID;
- (id)_getSpamExtensionName;
- (BOOL)_isMessageCategorized:(long long)a0;
- (BOOL)_isSpamFilteringEnabled;
- (id)_newSMSFilteringSettingsDictForFilterState:(long long)a0;
- (long long)_numberOfRepliesFor:(id)a0 fallbackFilterCategory:(long long *)a1 fallbackFilterSubCategory:(long long *)a2;
- (void)_processReceivedSMSFilteringSettingsDictionary:(id)a0 deviceID:(id)a1;
- (void)_processReceivedSMSFilteringSettingsDictionaryInBlastDoor:(id)a0 deviceID:(id)a1;
- (void)_processReceivedSMSFilteringSettingsMessage:(id)a0 deviceID:(id)a1;
- (void)_relayCurrentSMSFilteringSettings;
- (void)_relaySMSFilteringSettingsForFilterState:(long long)a0;
- (BOOL)_shouldCheckChatForSMSSpam:(id)a0 participants:(id)a1 sender:(id)a2 chat:(id)a3 fallbackFilterCategory:(long long *)a4 fallbackFilterSubCategory:(long long *)a5;
- (BOOL)_shouldCheckSMSForCategoryFromFirstPartyFilter;
- (void)_smsSpamCheck:(id /* block */)a0 withMessageBody:(id)a1 withGuid:(id)a2 sender:(id)a3 receiverISOCountryCode:(id)a4 receivedViaRelay:(BOOL)a5 containsOneTimeCode:(BOOL)a6;
- (BOOL)_storeSpamCompletionBlock:(id /* block */)a0 forMessageGUID:(id)a1;
- (void)_updateFilterParamsForFilterExtension;
- (void)_updateSpamFilteringState:(long long)a0;
- (void)applyPendingPriorityMessagesIfNeeded;
- (void)categorizeIncomingMessage:(id)a0 deviceID:(id)a1 category:(long long)a2 subCategory:(long long)a3 messageGUID:(id)a4 sender:(id)a5 wasRelayed:(BOOL)a6 chatIdentifier:(id)a7 participants:(id)a8 checkingForSpam:(BOOL *)a9 trustIndicator:(id)a10 myReceiverISOCountryCode:(id)a11 messageBody:(id)a12 foundChat:(id)a13 service:(id)a14 containsOneTimeCode:(BOOL)a15 fileTransferGUIDs:(id)a16 completion:(id /* block */)a17;
- (void)categorizeIncomingRCSMessageGUID:(id)a0 sender:(id)a1 wasRelayed:(BOOL)a2 chatIdentifier:(id)a3 participants:(id)a4 checkingForSpam:(BOOL *)a5 trustIndicator:(id)a6 myReceiverISOCountryCode:(id)a7 messageBody:(id)a8 foundChat:(id)a9 service:(id)a10 containsOneTimeCode:(BOOL)a11 fileTransferGUIDs:(id)a12 completion:(id /* block */)a13;
- (void)categorizeIncomingSMSMessage:(id)a0 messageGUID:(id)a1 sender:(id)a2 wasRelayed:(BOOL)a3 chatIdentifier:(id)a4 participants:(id)a5 checkingForSpam:(BOOL *)a6 myReceiverISOCountryCode:(id)a7 messageBody:(id)a8 foundChat:(id)a9 service:(id)a10 containsOneTimeCode:(BOOL)a11 fileTransferGUIDs:(id)a12 completion:(id /* block */)a13;
- (void)disableFilteringIfNeeded;
- (void)handleTrustKitDecisioningForSender:(id)a0 service:(id)a1 messageGUID:(id)a2 trustIndicator:(id)a3 messageBody:(id)a4 myReceiverISOCountryCode:(id)a5 containsOneTimeCode:(BOOL)a6 fileTransferGUIDs:(id)a7 foundChat:(id)a8 fallbackFilterCategory:(long long)a9 fallbackFilterSubCategory:(long long)a10 filteringProcessingBlock:(id /* block */)a11 processDictCompletionBlock:(id /* block */)a12;
- (void)handler:(id)a0 incomingSMSFilteringSettingsMessage:(id)a1 fromToken:(id)a2;
- (id)initWithIdentityLookupDecisioningManager:(id)a0 trustKitDecisioningManager:(id)a1 communicationTrustManager:(id)a2 relayPushHandler:(id)a3;
- (BOOL)isServiceAllowsRelay:(id)a0;
- (void)markJunkForTrustKitDecisionWithGUID:(id)a0 reason:(long long)a1 metadataData:(id)a2 fromService:(id)a3;
- (void)markJunkForUserReportWithGUID:(id)a0;
- (void)priorityMessagesReceived:(id)a0 forService:(id)a1;
- (void)receivedJunkChatCommandForMessage:(id)a0 actionType:(unsigned long long)a1 trustKitReason:(long long)a2 trustKitMetadataData:(id)a3 fromService:(id)a4;
- (void)recordFilteringMetricsForMessageItem:(id)a0 filteredToChat:(id)a1 filterExtensionMetadata:(id)a2;
- (void)relayTrustKitResultForMessage:(id)a0 forReason:(long long)a1 withMetadata:(id)a2;
- (long long)trustKitRequestReasonFrom:(long long)a0;

@end
