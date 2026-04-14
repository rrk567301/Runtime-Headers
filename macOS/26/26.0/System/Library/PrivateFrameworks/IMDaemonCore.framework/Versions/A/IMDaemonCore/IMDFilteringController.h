@class NSMutableDictionary, NSArray, NSMutableSet, IMDService, NSObject, NSString;
@protocol OS_dispatch_queue, IMSyncedSettingsManaging;

@interface IMDFilteringController : NSObject <IMDRelayPushHandlerListener>

@property (nonatomic) BOOL hasSpamExtensionUpdated;
@property (retain, nonatomic) NSMutableDictionary *spamBlockMap;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue;
@property (retain, nonatomic) id<IMSyncedSettingsManaging> syncedSettingsManager;
@property (retain, nonatomic) NSMutableSet *pendingPriorityMessageGUIDs;
@property (readonly, nonatomic) IMDService *service;
@property (readonly, nonatomic) NSArray *accounts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (id)account;
- (void).cxx_destruct;
- (void)relayPriorityMessageFor:(id)a0;
- (id)relayController;
- (void)_removeAppliedPriorityMessages:(id)a0;
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
- (BOOL)_shouldCheckChatForSMSSpam:(id)a0 participants:(id)a1 sender:(id)a2 fallbackFilterCategory:(long long *)a3 fallbackFilterSubCategory:(long long *)a4;
- (BOOL)_shouldCheckSMSForCategoryFromFirstPartyFilter;
- (void)_smsSpamCheck:(id /* block */)a0 withMessageBody:(id)a1 withGuid:(id)a2 sender:(id)a3 receiverISOCountryCode:(id)a4 receivedViaRelay:(BOOL)a5 containsOneTimeCode:(BOOL)a6;
- (BOOL)_storeSpamCompletionBlock:(id /* block */)a0 forMessageGUID:(id)a1;
- (void)_updateFilterParamsForFilterExtension;
- (void)_updateSpamFilteringState:(long long)a0;
- (void)applyPendingPriorityMessagesIfNeeded;
- (void)categorizeIncomingMessage:(id)a0 deviceID:(id)a1 category:(long long)a2 subCategory:(long long)a3 messageGUID:(id)a4 sender:(id)a5 wasRelayed:(BOOL)a6 chatIdentifier:(id)a7 participants:(id)a8 checkingForSpam:(BOOL *)a9 trustIndicator:(id)a10 myReceiverISOCountryCode:(id)a11 messageBody:(id)a12 foundChat:(id)a13 service:(id)a14 containsOneTimeCode:(BOOL)a15 completion:(id /* block */)a16;
- (void)categorizeIncomingRCSMessageGUID:(id)a0 sender:(id)a1 wasRelayed:(BOOL)a2 chatIdentifier:(id)a3 participants:(id)a4 checkingForSpam:(BOOL *)a5 trustIndicator:(id)a6 myReceiverISOCountryCode:(id)a7 messageBody:(id)a8 foundChat:(id)a9 service:(id)a10 containsOneTimeCode:(BOOL)a11 completion:(id /* block */)a12;
- (void)categorizeIncomingSMSMessage:(id)a0 messageGUID:(id)a1 sender:(id)a2 wasRelayed:(BOOL)a3 chatIdentifier:(id)a4 participants:(id)a5 checkingForSpam:(BOOL *)a6 myReceiverISOCountryCode:(id)a7 messageBody:(id)a8 foundChat:(id)a9 service:(id)a10 containsOneTimeCode:(BOOL)a11 completion:(id /* block */)a12;
- (void)disableFilteringIfNeeded;
- (void)handler:(id)a0 incomingSMSFilteringSettingsMessage:(id)a1 fromToken:(id)a2;
- (void)priorityMessagesReceived:(id)a0 forService:(id)a1;
- (void)recordFilteringMetricsForMessageItem:(id)a0 filteredToChat:(id)a1 filterExtensionMetadata:(id)a2;

@end
