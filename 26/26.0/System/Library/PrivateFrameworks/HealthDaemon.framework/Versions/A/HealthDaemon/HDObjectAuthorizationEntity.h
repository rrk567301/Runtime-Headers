@class NSString;

@interface HDObjectAuthorizationEntity : HDHealthEntity <HDHealthEntitySchema>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)uniquedColumns;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)foreignKeys;
+ (long long)protectionClass;
+ (id)databaseTable;
+ (id)propertyForSyncIdentity;
+ (BOOL)resetAllObjectAuthorizationRecordsForProfile:(id)a0 error:(id *)a1;
+ (BOOL)resetAuthorizationForObjects:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)authorizationRecordsForSamples:(id)a0 sourceEntity:(id)a1 sessionIdentifier:(id)a2 profile:(id)a3 error:(id *)a4;
+ (id)pruneWithProfile:(id)a0 nowDate:(id)a1 limit:(unsigned long long)a2 error:(id *)a3;
+ (BOOL)setObjectAuthorizationRecords:(id)a0 syncProvenance:(long long)a1 syncIdentity:(long long)a2 profile:(id)a3 error:(id *)a4;
+ (id)propertyForSyncProvenance;
+ (id)authorizationStatusForSamplesOfType:(id)a0 sourceEntity:(id)a1 profile:(id)a2 error:(id *)a3;
+ (BOOL)resetObjectAuthorizationRecordsForSource:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)authorizationRecordsBySourceForSampleWithUUID:(id)a0 profile:(id)a1 error:(id *)a2;


@end
