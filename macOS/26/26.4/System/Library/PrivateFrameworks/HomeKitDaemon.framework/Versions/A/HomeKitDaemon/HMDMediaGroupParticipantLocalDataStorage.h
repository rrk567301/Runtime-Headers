@class NSObject, NSUUID, HMMediaDestinationControllerData, HMMediaDestination, HMDMediaGroupsAggregatorBackupReceiver, NSString, NSUserDefaults;
@protocol OS_os_log, HMELastEventStoreReadHandle, HMDMediaGroupParticipantLocalDataStorageDataSource, HMDFeaturesDataSource, HMEEventForwarder, HMDMediaGroupParticipantLocalDataStorageDelegate;

@interface HMDMediaGroupParticipantLocalDataStorage : HMFObject <HMFLogging, HMDMediaDestinationControllerLocalDataStorageHandler, HMDMediaDestinationLocalDataStorageHandler, HMDMediaGroupsAggregatorBackupReceiverDelegate, HMDMediaGroupsBackupLocalDataStorageHandler> {
    NSObject<OS_os_log> *_logger;
}

@property (readonly, copy) NSUUID *identifier;
@property (readonly) NSUserDefaults *userDefaults;
@property (readonly) id<HMEEventForwarder> eventForwarder;
@property (readonly) id<HMELastEventStoreReadHandle> eventStoreReadHandle;
@property (readonly) id<HMDFeaturesDataSource> featuresDataSource;
@property (readonly, copy) HMMediaDestinationControllerData *destinationControllerData;
@property (readonly, copy) HMMediaDestination *destination;
@property (weak) id<HMDMediaGroupParticipantLocalDataStorageDataSource> dataSource;
@property (weak) id<HMDMediaGroupParticipantLocalDataStorageDelegate> delegate;
@property (readonly) HMDMediaGroupsAggregatorBackupReceiver *groupsBackupReceiver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)eventSource;
- (id)initWithIdentifier:(id)a0 backUpReceiver:(id)a1 userDefaults:(id)a2 eventForwarder:(id)a3 eventStoreReadHandle:(id)a4 featuresDataSource:(id)a5;
- (void)updateDestinationControllerDestinationIdentifier:(id)a0;
- (void)notifyDidChangeDestinationIdentifier:(id)a0 forDestinationControllerIdentifier:(id)a1;
- (void)updateMediaDestination:(id)a0;
- (void)updateParticipantData:(id)a0;
- (void)publishCachedObject;
- (void)updateAudioGroupIdentifier:(id)a0;
- (void)migrateWithExpectedDestinationControllerSupportOptions:(unsigned long long)a0;
- (id)migratedParticipantData:(id)a0 withDestinationSupportOptions:(unsigned long long)a1;
- (void)updateDestinationControllerSupportedOptions:(unsigned long long)a0;
- (id)createDefaultParticipantData;
- (void)publishCachedObjectIfNeeded;
- (id)topicName;
- (void).cxx_destruct;
- (id)logIdentifier;
- (id)initWithIdentifier:(id)a0 backUpReceiver:(id)a1 userDefaults:(id)a2 eventForwarder:(id)a3 eventStoreReadHandle:(id)a4;
- (void)updateDestinationControllerAvailableDestinationIdentifiers:(id)a0;
- (void)updateBackupGroupData:(id)a0;
- (void)updateDestinationSupportOptions:(unsigned long long)a0;
- (id)participantData;
- (id)lastCachedEventParticipantData;
- (void)migrateWithExpectedDestinationSupportOptions:(unsigned long long)a0;
- (void)addBackupGroupData:(id)a0;
- (void)didReceiveBackupData:(id)a0 forBackupReceiver:(id)a1;
- (BOOL)hasDataToPublishInParticipantData:(id)a0;
- (void)configureWithHome:(id)a0 messageDispatcher:(id)a1;
- (id)protoParticipantData;
- (void)updateDestinationControllerData:(id)a0;

@end
