@class NSUUID, NSArray, HMDMediaGroupsAggregatorBackupSender, NSString, NSMutableDictionary;
@protocol HMDMediaGroupsLocalDataStorageDataSource;

@interface HMDMediaGroupsLocalDataStorage : HMFObject <HMDMediaGroupsAggregatorBackupSenderDataSource> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_groups;
    NSMutableDictionary *_participantAccessoryUUIDToAssociatedGroupIdentifier;
}

@property (readonly, copy) NSUUID *identifier;
@property (readonly) HMDMediaGroupsAggregatorBackupSender *backupDataSender;
@property (weak) id<HMDMediaGroupsLocalDataStorageDataSource> dataSource;
@property (readonly) NSArray *groups;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)updateGroup:(id)a0;
- (void)clearCachedData;
- (id)logIdentifier;
- (void)clearCachedDataForParticipantAccessoryUUID:(id)a0;
- (id)backupGroupsForParticipantAccessoryUUID:(id)a0;
- (id)receiverForParticipantAccessoryUUID:(id)a0;
- (id)groupWithIdentifier:(id)a0;
- (id)backupGroupsForParticipantAccessoryUUID:(id)a0 mediaGroupsAggregatorBackupSender:(id)a1;
- (id)routerForParticipantAccessoryUUID:(id)a0 mediaGroupsAggregatorBackupSender:(id)a1;
- (id)receiverForParticipantAccessoryUUID:(id)a0 mediaGroupsAggregatorBackupSender:(id)a1;
- (id)initWithIdentifier:(id)a0 backupSender:(id)a1;
- (void)updateUsingParticipantAccessoryUUID:(id)a0 associatedGroupIdentifier:(id)a1 backedUpGroupData:(id)a2;
- (void)updateGroup:(id)a0 participantAccessoryUUIDs:(id)a1;
- (void)backupData;
- (id)associatedGroupsWithGroupIdentifier:(id)a0;
- (id)allParticipantAccessoryUUIDs;
- (void)removeAssociatedGroupIdentifierForParticipantAccessoryUUID:(id)a0;
- (id)associatedGroupIdentifierForParticipantAccessoryUUID:(id)a0;
- (void)unsetParticipantAccessoryUUIDsWithAssociatedGroupIdentifier:(id)a0;
- (id)nullSentinelUUID;
- (void)setParticipantAccessoryUUID:(id)a0 associatedGroupIdentifier:(id)a1;
- (void)addBackedUpGroups:(id)a0;
- (void)addBackedUpGroup:(id)a0;
- (void)removeGroupWithIdentifier:(id)a0;
- (id)routerForParticipantAccessoryUUID:(id)a0;

@end
