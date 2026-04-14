@interface WAMigrationUtils : NSObject

+ (BOOL)addMissingRecoveryRelationships:(id)a0 withError:(id *)a1;
+ (BOOL)copyRoamTargetColumnsAddMissingRoamRelationships:(id)a0 withError:(id *)a1;
+ (int)mapOldJoinReason:(int)a0 andWAManualAssociationTypeMaskToJoinReason:(int)a1;
+ (id)migrationManagerTo:(id)a0 from:(id)a1 withError:(id *)a2;
+ (id)modelWithHash:(id)a0 withError:(id *)a1;
+ (id)referenceForModel:(id)a0 withError:(id *)a1;
+ (BOOL)remodelJoinReasonOnContext:(id)a0 withError:(id *)a1;
+ (id)stagedMigrationManagerIfNeededForMOM:(id)a0 andStore:(id)a1 withError:(id *)a2;
+ (BOOL)tryToMigrate:(id)a0 using:(id /* block */)a1 withError:(id *)a2;

@end
