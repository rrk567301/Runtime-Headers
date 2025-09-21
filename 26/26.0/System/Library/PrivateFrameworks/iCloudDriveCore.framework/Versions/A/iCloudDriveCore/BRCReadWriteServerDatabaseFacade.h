@class NSString;

@interface BRCReadWriteServerDatabaseFacade : BRCDatabaseFacade <BRCServerDatabaseWriteProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)deleteParticipantsForSharedItemID:(id)a0 zoneRowID:(id)a1 participantOptions:(unsigned long long)a2;
- (id)getOrCreateUserKeyForOwnerName:(id)a0;
- (BOOL)saveServerZone:(id)a0;
- (id)createDeviceKeyForName:(id)a0;
- (BOOL)deleteParticipantsForSharedItemID:(id)a0 zoneRowID:(id)a1;
- (BOOL)deleteParticipantsForZoneRowID:(id)a0 batchSize:(long long)a1;
- (void)deleteSideCarLookAheadInfoForRecordName:(id)a0;
- (BOOL)doesParticipantExistForItemID:(id)a0 zoneRowID:(id)a1 userName:(id)a2;
- (id)initWithDB:(id)a0 workloop:(id)a1;
- (BOOL)insertOrReplaceParticipantForSharedItemID:(id)a0 zoneRowID:(id)a1 participantUserName:(id)a2 shareParticipantsOptions:(unsigned long long)a3;
- (void)insertSideCarLookAheadInfo:(id)a0 shareRecordName:(id)a1 sideCarInfo:(id)a2;
- (void)setUserIdentityForUserName:(id)a0 userIdentity:(id)a1;
- (void)updatePCSChainingStateForItemWithUnkownPCSState:(unsigned int)a0 itemID:(id)a1 zoneRowID:(id)a2;
- (BOOL)updateParticipantsForSharedItemID:(id)a0 zoneRowID:(id)a1 paticipantFlagsCallblock:(id /* block */)a2;
- (BOOL)updateServerItemWithSideCarInfo:(id)a0 sideCarInfo:(id)a1 zoneRowID:(id)a2;

@end
