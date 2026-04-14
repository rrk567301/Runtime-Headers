@class WAPersistentContainer, NSManagedObjectContext;

@interface AnalyticsStoreMOHandler : NSObject

@property (retain, nonatomic) WAPersistentContainer *persistentContainer;
@property (retain, nonatomic) NSManagedObjectContext *backgroundStoreMoHandlerMOC;

+ (id)sharedAnalyticsStoreMOHandlerWithContainer:(id)a0;

- (id)initWithContainer:(id)a0;
- (id)managedObjectContext;
- (BOOL)managedObjectContextSave:(BOOL)a0 reset:(BOOL)a1 release:(BOOL)a2 withError:(id *)a3;
- (void)performBlockOnManagedObjectContext:(id)a0 block:(id /* block */)a1;
- (void).cxx_destruct;
- (void)contextDidSave:(id)a0;
- (void)updateManagedObjectContextWithoutSave;
- (void)resetManagedObjectContext;
- (BOOL)setNetworkManagedObjectPropertyValueForKeyWithoutSave:(id)a0 forKey:(id)a1 withValue:(id)a2;
- (BOOL)setBssManagedObjectPropertyValueForKeyWithoutSave:(id)a0 forKey:(id)a1 withValue:(id)a2;
- (void)releaseBackgroundMOC;
- (void)performBlockOnManagedObjectContextForNSData:(id)a0 withDate:(id)a1 block:(id /* block */)a2;
- (void)dealloc;
- (BOOL)saveManagedObjectContextWithError:(id *)a0;

@end
