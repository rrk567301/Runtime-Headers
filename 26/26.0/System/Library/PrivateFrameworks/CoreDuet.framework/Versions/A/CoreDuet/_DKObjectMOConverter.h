@class NSArray, NSCache;

@interface _DKObjectMOConverter : NSObject {
    NSCache *_cache;
}

@property BOOL readMetadata;
@property BOOL deduplicateValues;
@property (retain) NSArray *excludedMetadataKeys;

- (id)insertObject:(id)a0 inManagedObjectContext:(id)a1;
- (id)dataIntervalsFromManagedObjects:(id)a0;
- (id)init;
- (id)objectsFromManagedObjects:(id)a0;
- (void).cxx_destruct;

@end
