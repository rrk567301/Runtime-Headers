@class NSManagedObjectContext, NSArray;

@interface PLModelMigrationHistory : NSObject {
    NSManagedObjectContext *_managedObjectContext;
    NSArray *_migrationHistory;
}

- (void).cxx_destruct;
- (id)initWithManagedObjectContext:(id)a0;
- (char)isLibraryOlderThanVersion:(unsigned short)a0;
- (id)libraryVersionHistorySinceLastRebuildOnly:(char)a0;
- (char)libraryWasEverRebuilt;

@end
