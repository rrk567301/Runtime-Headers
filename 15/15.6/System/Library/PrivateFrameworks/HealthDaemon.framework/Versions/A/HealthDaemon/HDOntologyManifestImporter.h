@class NSString;

@interface HDOntologyManifestImporter : NSObject <HDOntologySchemaImporter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)canImportEntry:(id)a0;
+ (char)importManifestWithEntry:(id)a0 updateCoordinator:(id)a1 error:(id *)a2;
+ (char)importOntologyShardEntry:(id)a0 shardRegistry:(id)a1 error:(id *)a2;
+ (id)pruneEntries:(id)a0 options:(unsigned long long)a1 shardRegistry:(id)a2 error:(id *)a3;
+ (id)willPruneEntries:(id)a0 options:(unsigned long long)a1 shardRegistry:(id)a2 error:(id *)a3;

- (id)init;

@end
