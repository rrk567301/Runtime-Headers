@class NSManagedObjectContext, NSPersistentStore;

@interface CNCDMigrator : NSObject

@property (readonly) NSManagedObjectContext *context;
@property (readonly) NSPersistentStore *store;

- (void).cxx_destruct;
- (id)initWithStore:(id)a0;
- (id)initWithContext:(id)a0;
- (void)migrate;
- (id)initWithContext:(id)a0 store:(id)a1;

@end
