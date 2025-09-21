@class RTPersistenceManager;

@interface RTPersistenceExpirationEnforcer : NSObject {
    RTPersistenceManager *_persistenceManager;
}

- (id)init;
- (void).cxx_destruct;
- (id)collectRecordIDsByTypeExpiredBeforeDate:(id)a0 ownedByThisDevice:(char)a1 context:(id)a2 error:(id *)a3;
- (id)entitiesWithDeviceAndExpirationProperty:(id)a0 ownedByThisDevice:(char)a1;
- (id)initWithPersistenceManager:(id)a0;
- (void)mergeEntriesFromDictionary:(id)a0 intoDictionary:(id)a1;
- (void)mergeIdentifiersFromArray:(id)a0 entityName:(id)a1 intoDictionary:(id)a2;
- (id)objectIDsByTypeAffectedByDeletingObjectWithID:(id)a0 context:(id)a1 error:(id *)a2;
- (id)objectsWithLifetimeMatchingObjectWithID:(id)a0 context:(id)a1 error:(id *)a2;
- (char)removeExpiredRecordsBeforeDate:(id)a0 context:(id)a1 error:(id *)a2;
- (char)removeExpiredRecordsWithObjectIDs:(id)a0 context:(id)a1 error:(id *)a2;
- (char)removeRecordsOwnedByOtherDevicesExpiredBeforeDate:(id)a0 allowPropagation:(char)a1 context:(id)a2 error:(id *)a3;
- (char)removeRecordsOwnedByThisDeviceExpiredBeforeDate:(id)a0 context:(id)a1 error:(id *)a2;
- (char)repairInvalidExpirationDatesWithContext:(id)a0 error:(id *)a1;

@end
