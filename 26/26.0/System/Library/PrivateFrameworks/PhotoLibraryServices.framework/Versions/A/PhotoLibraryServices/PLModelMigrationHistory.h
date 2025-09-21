@class NSManagedObjectContext, NSArray;

@interface PLModelMigrationHistory : NSObject {
    NSManagedObjectContext *_managedObjectContext;
    NSArray *_migrationHistory;
}

- (id)initWithManagedObjectContext:(id)a0;
- (void).cxx_destruct;
- (BOOL)isLibraryOlderThanVersion:(unsigned short)a0;
- (id)libraryVersionHistorySinceLastRebuildOnly:(BOOL)a0;
- (BOOL)libraryWasEverRebuilt;

@end
