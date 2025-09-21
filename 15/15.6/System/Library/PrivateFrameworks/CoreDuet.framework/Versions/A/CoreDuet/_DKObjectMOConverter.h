@class NSArray, NSCache;

@interface _DKObjectMOConverter : NSObject {
    NSCache *_cache;
}

@property char readMetadata;
@property char deduplicateValues;
@property (retain) NSArray *excludedMetadataKeys;

- (id)init;
- (void).cxx_destruct;
- (id)dataIntervalsFromManagedObjects:(id)a0;
- (id)insertObject:(id)a0 inManagedObjectContext:(id)a1;
- (id)objectsFromManagedObjects:(id)a0;

@end
