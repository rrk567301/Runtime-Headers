@class NSManagedObjectContext;

@interface SHLouvainClusterQuery : NSObject

@property (retain) NSManagedObjectContext *moc;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)tracksAtCohesionLevel:(long long)a0 forQueryTracks:(id)a1 filteredBy:(id)a2;
- (id)tracksAtLevel:(long long)a0 forQueryTracks:(id)a1 filteredBy:(id)a2;
- (id)validPrefixesForTracks:(id)a0 ofLength:(long long)a1;
- (id)pathString:(id)a0 ofLength:(long long)a1;

@end
