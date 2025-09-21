@interface NSSQLiteInPlaceMigrationManager : NSMigrationManager

+ (char)_canMigrateWithMappingModel:(id)a0;

- (void)dealloc;
- (char)migrateStoreFromURL:(id)a0 type:(id)a1 options:(id)a2 withMappingModel:(id)a3 toDestinationURL:(id)a4 destinationType:(id)a5 destinationOptions:(id)a6 error:(id *)a7;

@end
