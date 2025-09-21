@class NSManagedObjectContext, NSPersistentStore;

@interface CNCDMigrator : NSObject

@property (readonly) NSManagedObjectContext *context;
@property (readonly) NSPersistentStore *store;

- (void)migrate;
- (id)initWithStore:(id)a0;
- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0 store:(id)a1;

@end
