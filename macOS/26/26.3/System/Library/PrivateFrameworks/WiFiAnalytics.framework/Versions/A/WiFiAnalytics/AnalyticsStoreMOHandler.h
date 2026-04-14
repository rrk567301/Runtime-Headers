@class WAPersistentContainer, NSManagedObjectContext;

@interface AnalyticsStoreMOHandler : NSObject

@property (retain, nonatomic) WAPersistentContainer *persistentContainer;
@property (retain, nonatomic) NSManagedObjectContext *backgroundStoreMoHandlerMOC;

+ (id)sharedAnalyticsStoreMOHandlerWithContainer:(id)a0;

- (id)initWithContainer:(id)a0;
- (id)managedObjectContext;
- (void)releaseBackgroundMOC;
- (void)resetManagedObjectContext;
- (void)performBlockOnManagedObjectContextForNSData:(id)a0 withDate:(id)a1 block:(id /* block */)a2;
- (BOOL)saveManagedObjectContextWithError:(id *)a0;
- (BOOL)setNetworkManagedObjectPropertyValueForKeyWithoutSave:(id)a0 forKey:(id)a1 withValue:(id)a2;
- (BOOL)setBssManagedObjectPropertyValueForKeyWithoutSave:(id)a0 forKey:(id)a1 withValue:(id)a2;
- (void)performBlockOnManagedObjectContext:(id)a0 block:(id /* block */)a1;
- (void)updateManagedObjectContextWithoutSave;
- (BOOL)managedObjectContextSave:(BOOL)a0 reset:(BOOL)a1 release:(BOOL)a2 withError:(id *)a3;
- (void).cxx_destruct;
- (void)dealloc;
- (void)contextDidSave:(id)a0;

@end
