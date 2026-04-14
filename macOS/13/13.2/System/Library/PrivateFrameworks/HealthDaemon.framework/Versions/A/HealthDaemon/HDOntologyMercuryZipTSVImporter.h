@class NSString;

@interface HDOntologyMercuryZipTSVImporter : NSObject <HDOntologySchemaImporter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)purgeableSpaceForUrgency:(int)a0 shardRegistry:(id)a1;
+ (long long)purgeSpaceForUrgency:(int)a0 shardRegistry:(id)a1;
+ (BOOL)canImportEntry:(id)a0;
+ (BOOL)importOntologyShardEntry:(id)a0 shardRegistry:(id)a1 error:(id *)a2;
+ (id)willPruneEntries:(id)a0 options:(unsigned long long)a1 shardRegistry:(id)a2 error:(id *)a3;
+ (id)pruneEntries:(id)a0 options:(unsigned long long)a1 shardRegistry:(id)a2 error:(id *)a3;

- (id)init;

@end
