@class NSString;

@interface EDAddBrandIndicatorEvidenceTableUpgradeStep : NSObject <EDTableUpgradeStep>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)_addBrandIndicatorEvidenceTableWithConnection:(id)a0 databaseName:(id)a1 error:(id *)a2;
+ (id)_brandIndicatorEvidenceTableSchemaWithBrandIndicatorsTableSchema:(id)a0;
+ (char)_copyEvidenceFromBrandIndicatorsWithConnection:(id)a0 databaseName:(id)a1 error:(id *)a2;
+ (char)_dropBrandIndicatorsIndexesWithConnection:(id)a0 databaseName:(id)a1 error:(id *)a2;
+ (char)_dropEvidenceURLColumnFromBrandIndicatorsTableWithConnection:(id)a0 databaseName:(id)a1 error:(id *)a2;
+ (char)_dropVerifiedColumnFromBrandIndicatorsTableWithConnection:(id)a0 databaseName:(id)a1 error:(id *)a2;
+ (id)_qualifiedNameForName:(id)a0 inDatabase:(id)a1;
+ (char)_runWithConnection:(id)a0 databaseName:(id)a1 error:(id *)a2;
+ (char)runWithConnection:(id)a0 error:(id *)a1;
+ (char)runWithConnection:(id)a0 journalManager:(id)a1 error:(id *)a2;
+ (char)runWithConnection:(id)a0 protectedDatabaseName:(id)a1 error:(id *)a2;


@end
