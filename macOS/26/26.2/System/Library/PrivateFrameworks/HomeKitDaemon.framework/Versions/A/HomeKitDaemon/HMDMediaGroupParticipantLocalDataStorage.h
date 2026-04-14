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

- (void)updateMediaDestination:(id)a0;
- (void)addBackupGroupData:(id)a0;
- (id)eventSource;
- (id)participantData;
- (id)createDefaultParticipantData;
- (id)logIdentifier;
- (id)protoParticipantData;
- (id)migratedParticipantData:(id)a0 withDestinationSupportOptions:(unsigned long long)a1;
- (BOOL)hasDataToPublishInParticipantData:(id)a0;
- (void)migrateWithExpectedDestinationControllerSupportOptions:(unsigned long long)a0;
- (id)initWithIdentifier:(id)a0 backUpReciever:(id)a1 userDefaults:(id)a2 eventForwarder:(id)a3 eventStoreReadHandle:(id)a4;
- (void)publishCachedObjectIfNeeded;
- (void).cxx_destruct;
- (void)updateDestinationSupportOptions:(unsigned long long)a0;
- (void)publishCachedObject;
- (void)configureWithHome:(id)a0 messageDispatcher:(id)a1;
- (void)updateParticipantData:(id)a0;
- (id)topicName;
- (id)initWithIdentifier:(id)a0 backUpReciever:(id)a1 userDefaults:(id)a2 eventForwarder:(id)a3 eventStoreReadHandle:(id)a4 featuresDataSource:(id)a5;
- (void)notifyDidChangeDestinationIdentifier:(id)a0 forDestinationControllerIdentifier:(id)a1;
- (void)updateDestinationControllerDestinationIdentifier:(id)a0;
- (void)didReceiveBackupData:(id)a0 forBackupReceiver:(id)a1;
- (id)lastCachedEventParticipantData;
- (void)updateAudioGroupIdentifier:(id)a0;
- (void)updateBackupGroupData:(id)a0;
- (void)updateDestinationControllerData:(id)a0;
- (void)migrateWithExpectedDestinationSupportOptions:(unsigned long long)a0;
- (void)updateDestinationControllerAvailableDestinationIdentifiers:(id)a0;
- (void)updateDestinationControllerSupportedOptions:(unsigned long long)a0;

@end
