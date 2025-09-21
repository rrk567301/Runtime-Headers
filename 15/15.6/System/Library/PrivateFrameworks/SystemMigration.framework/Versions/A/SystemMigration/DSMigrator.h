@interface DSMigrator : NSObject

+ (id)allRecordsForSystem:(id)a0;
+ (char)copyAllDSRecords:(id)a0 fromSourceSystem:(id)a1 toSystem:(id)a2 andCommitChanges:(char)a3 andVerbose:(char)a4;
+ (char)copyAllDSRecords:(id)a0 fromSourceSystem:(id)a1 toSystem:(id)a2 mergeAttributes:(id)a3 andCommitChanges:(char)a4 andVerbose:(char)a5;
+ (char)copyHashPassword:(id)a0 fromSystem:(id)a1 toSystem:(id)a2;

@end
