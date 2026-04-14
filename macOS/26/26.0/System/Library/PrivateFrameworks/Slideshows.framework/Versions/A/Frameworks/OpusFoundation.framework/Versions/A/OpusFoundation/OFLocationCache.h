@class NSString, NSManagedObjectModel, NSPersistentStoreCoordinator, NSPredicate, NSManagedObjectContext;

@interface OFLocationCache : NSObject {
    NSString *_diskCacheFilepath;
    NSManagedObjectContext *_parentManagedObjectContext;
    NSPredicate *_predicateEntryTemplate;
    NSPredicate *_predicateEntryWithLocalRegionTemplate;
}

@property (retain, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (retain, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (retain, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

+ (id)defaultCache;

- (BOOL)_save;
- (BOOL)save;
- (void)dealloc;
- (void)invalidateDiskCaches;
- (void)invalidateMemoryCaches;
- (id)init;
- (void)_didResignActiveNotification;
- (void)_willTerminateNotification;
- (id)initWithDiskCacheFilepath:(id)a0;
- (void)invalidateCacheForLocationCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (id)placemarksForLocationCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (id)placemarksForLocationCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 andAccuracy:(double)a1;
- (id)placemarksForLocationCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 andAccuracy:(double)a1 closestResultDistance:(double *)a2 numberOfResults:(unsigned long long *)a3;
- (void)setPlacemarks:(id)a0 forLocationCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1;

@end
