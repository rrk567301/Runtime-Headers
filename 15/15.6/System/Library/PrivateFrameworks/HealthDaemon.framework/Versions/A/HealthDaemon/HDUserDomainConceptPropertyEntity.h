@class NSString;

@interface HDUserDomainConceptPropertyEntity : HDHealthEntity <HDUserDomainConceptDataEntity>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)protectionClass;
+ (id)foreignKeys;
+ (id)indices;
+ (id)databaseTable;
+ (char)addPropertyDataToCodable:(id)a0 userDomainConceptID:(long long)a1 transaction:(id)a2 error:(id *)a3;
+ (id)deviceLocalPropertiesWithUserDomainConceptID:(long long)a0 transaction:(id)a1 error:(id *)a2;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (char)deleteDeviceLocalPropertiesWithType:(long long)a0 userDomainConceptID:(long long)a1 transaction:(id)a2 error:(id *)a3;
+ (char)insertDataForUserDomainConcept:(id)a0 userDomainConceptID:(long long)a1 transaction:(id)a2 error:(id *)a3;
+ (char)insertDeviceLocalProperty:(id)a0 userDomainConceptID:(long long)a1 transaction:(id)a2 error:(id *)a3;
+ (char)pruneDataForUpdatedUserDomainConcept:(id)a0 userDomainConceptID:(long long)a1 transaction:(id)a2 error:(id *)a3;
+ (char)retrieveDataForUserDomainConcept:(id)a0 userDomainConceptID:(long long)a1 mutableUserDomainConceptProperties:(id)a2 transaction:(id)a3 error:(id *)a4;
+ (char)willDeleteUserDomainConcept:(id)a0 userDomainConceptID:(long long)a1 syncProvenance:(long long)a2 profile:(id)a3 transaction:(id)a4 error:(id *)a5;


@end
