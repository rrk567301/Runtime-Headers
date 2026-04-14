@class CalDatabaseInMemoryChangeTracking, NSHashTable;

@interface CalInMemoryTrackedDatabase : NSObject

@property (readonly, nonatomic) CalDatabaseInMemoryChangeTracking *database;
@property (readonly, nonatomic) NSHashTable *clients;
@property (readonly, nonatomic) BOOL hasClients;

- (void).cxx_destruct;
- (id)init;

@end
