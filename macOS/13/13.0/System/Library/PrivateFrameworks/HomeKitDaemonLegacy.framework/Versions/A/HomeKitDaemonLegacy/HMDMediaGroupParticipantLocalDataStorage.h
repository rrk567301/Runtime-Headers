@class NSUUID, HMMediaDestinationControllerData, HMMediaDestination, HMDMediaGroupsAggregatorBackupReceiver, NSString, NSUserDefaults;
@protocol HMELastEventStoreReadHandle, HMDMediaGroupParticipantLocalDataStorageDataSource, HMDFeaturesDataSource, HMEEventForwarder;

@interface HMDMediaGroupParticipantLocalDataStorage : HMFObject <HMFLogging, HMDMediaDestinationControllerLocalDataStorageHandler, HMDMediaDestinationLocalDataStorageHandler, HMDMediaGroupsAggregatorBackupReceiverDelegate, HMDMediaGroupsBackupLocalDataStorageHandler>

@property (readonly, copy) NSUUID *identifier;
@property (readonly) NSUserDefaults *userDefaults;
@property (readonly) id<HMEEventForwarder> eventForwarder;
@property (readonly) id<HMELastEventStoreReadHandle> eventStoreReadHandle;
@property (readonly) id<HMDFeaturesDataSource> featuresDataSource;
@property (readonly, copy) HMMediaDestinationControllerData *destinationControllerData;
@property (readonly, copy) HMMediaDestination *destination;
@property (weak) id<HMDMediaGroupParticipantLocalDataStorageDataSource> dataSource;
@property (readonly) HMDMediaGroupsAggregatorBackupReceiver *groupsBackupReceiver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)eventSource;
- (id)participantData;
- (id)logIdentifier;
- (void)configureWithHome:(id)a0 messageDispatcher:(id)a1;
- (void)updateDestinationControllerData:(id)a0;
- (void)updateDestinationControllerDestinationIdentifier:(id)a0;
- (void)updateDestinationControllerAvailableDestinationIdentifiers:(id)a0;
- (void)updateMediaDestination:(id)a0;
- (void)updateAudioGroupIdentifier:(id)a0;
- (void)updateDestinationSupportOptions:(unsigned long long)a0;
- (void)didReceiveBackupData:(id)a0 forBackupReceiver:(id)a1;
- (void)updateBackupGroupData:(id)a0;
- (id)initWithIdentifier:(id)a0 backUpReciever:(id)a1 userDefaults:(id)a2 eventForwarder:(id)a3 eventStoreReadHandle:(id)a4;
- (id)initWithIdentifier:(id)a0 backUpReciever:(id)a1 userDefaults:(id)a2 eventForwarder:(id)a3 eventStoreReadHandle:(id)a4 featuresDataSource:(id)a5;
- (id)protoParticipantData;
- (id)lastCachedEventParticipantData;
- (id)createDefaultParticipantData;
- (void)migrateWithExpectedDestinationSupportOptions:(unsigned long long)a0;
- (id)migratedParticipantData:(id)a0 withDestinationSupportOptions:(unsigned long long)a1;
- (void)migrateWithExpectedDestinationControllerSupportOptions:(unsigned long long)a0;
- (BOOL)hasDataToPublishInParticipantData:(id)a0;
- (void)publishCachedObjectIfNeeded;
- (void)publishCachedObject;
- (id)topicName;
- (void)updateParticipantData:(id)a0;
- (void)updateDestinationControllerSupportedOptions:(unsigned long long)a0;

@end
