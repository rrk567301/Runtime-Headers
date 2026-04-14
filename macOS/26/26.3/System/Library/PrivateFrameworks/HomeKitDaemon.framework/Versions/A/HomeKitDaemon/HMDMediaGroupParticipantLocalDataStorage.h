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
- (void)updateDestinationControllerDestinationIdentifier:(id)a0;
- (void)migrateWithExpectedDestinationControllerSupportOptions:(unsigned long long)a0;
- (void)updateDestinationSupportOptions:(unsigned long long)a0;
- (id)logIdentifier;
- (void)updateParticipantData:(id)a0;
- (id)topicName;
- (void)configureWithHome:(id)a0 messageDispatcher:(id)a1;
- (void)updateMediaDestination:(id)a0;
- (void)publishCachedObjectIfNeeded;
- (id)lastCachedEventParticipantData;
- (void)didReceiveBackupData:(id)a0 forBackupReceiver:(id)a1;
- (void)addBackupGroupData:(id)a0;
- (id)initWithIdentifier:(id)a0 backUpReciever:(id)a1 userDefaults:(id)a2 eventForwarder:(id)a3 eventStoreReadHandle:(id)a4 featuresDataSource:(id)a5;
- (void)updateDestinationControllerAvailableDestinationIdentifiers:(id)a0;
- (id)protoParticipantData;
- (void)notifyDidChangeDestinationIdentifier:(id)a0 forDestinationControllerIdentifier:(id)a1;
- (void)updateBackupGroupData:(id)a0;
- (void)publishCachedObject;
- (void).cxx_destruct;
- (void)updateDestinationControllerSupportedOptions:(unsigned long long)a0;
- (id)createDefaultParticipantData;
- (void)updateDestinationControllerData:(id)a0;
- (id)migratedParticipantData:(id)a0 withDestinationSupportOptions:(unsigned long long)a1;
- (void)updateAudioGroupIdentifier:(id)a0;
- (id)initWithIdentifier:(id)a0 backUpReciever:(id)a1 userDefaults:(id)a2 eventForwarder:(id)a3 eventStoreReadHandle:(id)a4;
- (void)migrateWithExpectedDestinationSupportOptions:(unsigned long long)a0;
- (id)participantData;
- (BOOL)hasDataToPublishInParticipantData:(id)a0;

@end
