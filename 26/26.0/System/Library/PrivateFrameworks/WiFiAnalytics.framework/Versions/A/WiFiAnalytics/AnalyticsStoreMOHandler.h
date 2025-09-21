@class WAPersistentContainer, NSManagedObjectContext;

@interface AnalyticsStoreMOHandler : NSObject

@property (retain, nonatomic) WAPersistentContainer *persistentContainer;
@property (retain, nonatomic) NSManagedObjectContext *backgroundStoreMoHandlerMOC;

+ (id)sharedAnalyticsStoreMOHandlerWithContainer:(id)a0;

- (BOOL)setBssManagedObjectPropertyValueForKeyWithoutSave:(id)a0 forKey:(id)a1 withValue:(id)a2;
- (id)managedObjectContext;
- (id)initWithContainer:(id)a0;
- (void)dealloc;
- (BOOL)setNetworkManagedObjectPropertyValueForKeyWithoutSave:(id)a0 forKey:(id)a1 withValue:(id)a2;
- (void)releaseBackgroundMOC;
- (void)resetManagedObjectContext;
- (BOOL)saveManagedObjectContextWithError:(id *)a0;
- (void)contextDidSave:(id)a0;
- (BOOL)managedObjectContextSave:(BOOL)a0 reset:(BOOL)a1 release:(BOOL)a2 withError:(id *)a3;
- (void)performBlockOnManagedObjectContext:(id)a0 block:(id /* block */)a1;
- (void)updateManagedObjectContextWithoutSave;
- (void)performBlockOnManagedObjectContextForNSData:(id)a0 withDate:(id)a1 block:(id /* block */)a2;
- (void).cxx_destruct;

@end
