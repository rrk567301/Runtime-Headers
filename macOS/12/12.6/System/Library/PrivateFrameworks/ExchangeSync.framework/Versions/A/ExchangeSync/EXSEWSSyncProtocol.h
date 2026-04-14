@class EWSStreamingSubscription, NSString, NSCondition, NSObject, EWSExchangeServiceBinding;
@protocol OS_os_log;

@interface EXSEWSSyncProtocol : EXSSyncProtocol <EWSSubscriptionDelegate> {
    NSCondition *_networkAvailableCondition;
}

@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property BOOL networkAvailable;
@property (retain, nonatomic) EWSExchangeServiceBinding *bindingForData;
@property (retain, nonatomic) EWSExchangeServiceBinding *bindingForSubscription;
@property (retain, nonatomic) EWSExchangeServiceBinding *bindingForSync;
@property (retain, nonatomic) EWSStreamingSubscription *subscription;
@property (nonatomic) BOOL shouldHaveSubscription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)folderItemTypeFromFolderClass:(id)a0;
+ (long long)folderItemTypeFromFolder:(id)a0;
+ (BOOL)extendedPropertyChangesExistInEWSFolder:(id)a0 folder:(id)a1;
+ (id)createChangeItemForItemType:(id)a0 changeType:(long long)a1 changeSource:(id)a2 accountID:(long long)a3;
+ (long long)getChangeItemItemTypeFromFolder:(id)a0;
+ (id)deriveEXSEmailAddressFromEWSEmailAddressType:(id)a0;
+ (long long)deriveAttendeeResponseFrom:(long long)a0;
+ (long long)deriveMailBoxTypeFrom:(long long)a0;
+ (void)setRecurrenceProperties:(id)a0 forPattern:(id)a1 range:(id)a2;
+ (id)convertEWSAttendeesToEXSAttendees:(id)a0;
+ (id)itemPropertiesFromCalendarItemType:(id)a0;
+ (id)itemPropertiesFromTaskType:(id)a0;
+ (id)deriveWellKnownEWSAttendeeResponseFrom:(long long)a0;
+ (long long)deriveEWSMailBoxTypeFrom:(long long)a0;
+ (id)accountGenericLog;
+ (id)createDeleteFolderFieldForField:(long long)a0;

- (void).cxx_destruct;
- (void)shutdown;
- (void)subscriptionDidSubscribe:(id)a0;
- (void)subscriptionDidUnsubscribe:(id)a0;
- (void)subscription:(id)a0 receivedEvents:(id)a1;
- (void)subscription:(id)a0 failedWithError:(id)a1;
- (id)hostnames;
- (void)startup;
- (id)createChangeItemForFolderType:(id)a0 changeType:(long long)a1;
- (id)changeSourceID;
- (BOOL)canStoreChangeTokens;
- (id)lastProcessedChangeToken;
- (BOOL)canBatchChangeItemsForPush;
- (BOOL)pushChangeItems:(id)a0 withTrackingToken:(id)a1;
- (void)logServerCallOfType:(id)a0 withPublicIdentifier:(id)a1 withResponse:(id)a2;
- (id)createChangeItemForFolder:(id)a0 changeType:(long long)a1;
- (id)initWithAccount:(id)a0 dataManager:(id)a1 dispatchWorkloop:(id)a2;
- (void)startBindings;
- (void)stopBindings;
- (void)_startSubscription;
- (void)_stopSubscription;
- (id)sendEWSRequest:(id)a0 error:(id *)a1;
- (void)logServerCallOfType:(id)a0 withResponse:(id)a1;
- (void)syncFolderHierarchyForFolderIDs:(id)a0 initiatedBy:(id)a1 dispatchGroup:(id)a2;
- (id)loadFolderPropertiesForFolderIDs:(id)a0 error:(id *)a1;
- (id)createChangeItemForDeleteFolderType:(id)a0 itemType:(long long)a1;
- (id)loadItemPropertiesForItemIDs:(id)a0 withFolderType:(long long)a1 error:(id *)a2;
- (id)createChangeItemForDeleteFolder:(id)a0 itemType:(long long)a1;
- (BOOL)pushFolderCreated:(id)a0 trackingToken:(id)a1 error:(id *)a2;
- (BOOL)pushFolderUpdated:(id)a0 trackingToken:(id)a1 error:(id *)a2;
- (BOOL)pushFolderDeleted:(id)a0 trackingToken:(id)a1 error:(id *)a2;
- (BOOL)pushItemCreated:(id)a0 trackingToken:(id)a1 error:(id *)a2;
- (BOOL)pushItemUpdated:(id)a0 trackingToken:(id)a1 error:(id *)a2;
- (BOOL)pushItemDeleted:(id)a0 trackingToken:(id)a1 error:(id *)a2;
- (BOOL)_executeEWSOperation:(id)a0 withChangeItem:(id)a1 error:(id *)a2;
- (void)syncFolderHierarchyInitiatedBy:(id)a0 dispatchGroup:(id)a1;
- (void)syncItemsForFolder:(id)a0 initiatedBy:(id)a1 dispatchGroup:(id)a2;
- (void)processReceivedEvents:(id)a0 withDispatchGroup:(id)a1;
- (id)_itemShapeAdditionalPropertiesForFolderType:(long long)a0;
- (void)refreshBindings;
- (void)logServerCallOfType:(id)a0 withPublicIdentifier:(id)a1 withPrivateIdentifier:(id)a2 withResponse:(id)a3;
- (void)hostnameIsReachable:(id)a0;
- (void)hostnameIsNotReachable:(id)a0;
- (void)systemWasWokenFromSleep;
- (void)locateImportantFolders;
- (void)repushFolders:(id)a0 dispatchGroup:(id)a1;
- (void)resyncFolderHierarchyInitiatedBy:(id)a0 dispatchGroup:(id)a1;
- (void)resyncItemsForFolder:(id)a0 initiatedBy:(id)a1 dispatchGroup:(id)a2;
- (void)startPushChannel;
- (void)stopPushChannel;
- (void)logServerCallOfType:(id)a0 withPrivateIdentifier:(id)a1 withResponse:(id)a2;

@end
