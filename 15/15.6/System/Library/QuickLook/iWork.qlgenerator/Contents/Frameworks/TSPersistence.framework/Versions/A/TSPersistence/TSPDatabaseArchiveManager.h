@interface TSPDatabaseArchiveManager : NSObject

+ (char)_processDistributableArchiveEntry:(id)a0 database:(id)a1 fileManager:(id)a2 error:(id *)a3;
+ (char)_processGetRelationships:(id)a0 database:(id)a1 error:(id *)a2;
+ (char)_processLoad:(id)a0 classType:(int *)a1 database:(id)a2 fileManager:(id)a3 error:(id *)a4;
+ (char)populateDistributableArchiveEntry:(id)a0 database:(id)a1 fileManager:(id)a2;

@end
