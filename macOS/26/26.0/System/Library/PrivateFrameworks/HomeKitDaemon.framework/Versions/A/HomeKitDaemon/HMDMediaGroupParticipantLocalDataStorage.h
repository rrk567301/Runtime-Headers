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

- (void)configureWithHome:(id)a0 messageDispatcher:(id)a1;
- (void)publishCachedObject;
- (id)eventSource;
- (void)updateAudioGroupIdentifier:(id)a0;
- (id)participantData;
- (void)updateMediaDestination:(id)a0;
- (void)updateDestinationControllerData:(id)a0;
- (void)notifyDidChangeDestinationIdentifier:(id)a0 forDestinationControllerIdentifier:(id)a1;
- (id)initWithIdentifier:(id)a0 backUpReciever:(id)a1 userDefaults:(id)a2 eventForwarder:(id)a3 eventStoreReadHandle:(id)a4;
- (void)updateDestinationControllerDestinationIdentifier:(id)a0;
- (id)createDefaultParticipantData;
- (void)migrateWithExpectedDestinationControllerSupportOptions:(unsigned long long)a0;
- (void)updateDestinationSupportOptions:(unsigned long long)a0;
- (id)protoParticipantData;
- (id)migratedParticipantData:(id)a0 withDestinationSupportOptions:(unsigned long long)a1;
- (void)updateDestinationControllerAvailableDestinationIdentifiers:(id)a0;
- (id)initWithIdentifier:(id)a0 backUpReciever:(id)a1 userDefaults:(id)a2 eventForwarder:(id)a3 eventStoreReadHandle:(id)a4 featuresDataSource:(id)a5;
- (void)migrateWithExpectedDestinationSupportOptions:(unsigned long long)a0;
- (id)topicName;
- (void)updateBackupGroupData:(id)a0;
- (BOOL)hasDataToPublishInParticipantData:(id)a0;
- (void)addBackupGroupData:(id)a0;
- (void)didReceiveBackupData:(id)a0 forBackupReceiver:(id)a1;
- (id)logIdentifier;
- (id)lastCachedEventParticipantData;
- (void)updateDestinationControllerSupportedOptions:(unsigned long long)a0;
- (void)publishCachedObjectIfNeeded;
- (void)updateParticipantData:(id)a0;
- (void).cxx_destruct;

@end
