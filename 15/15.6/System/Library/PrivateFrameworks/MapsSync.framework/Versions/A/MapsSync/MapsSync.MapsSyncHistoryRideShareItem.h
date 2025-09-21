@class NSString, GEOComposedWaypoint;

@interface MapsSync.MapsSyncHistoryRideShareItem : MapsSync.MapsSyncHistoryItem {
    void /* unknown type, empty encoding */ _startWaypoint;
    void /* unknown type, empty encoding */ _endWaypoint;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) GEOComposedWaypoint *startWaypoint;
@property (nonatomic, readonly) GEOComposedWaypoint *endWaypoint;

- (char)isEqual:(id)a0;
- (id)initWithObject:(id)a0;
- (void).cxx_destruct;
- (Class)managedObjectClass;
- (void)addEditWithBlock:(id /* block */)a0;
- (Class)mutableObjectClass;
- (void)setPropertiesWithObject:(id)a0;

@end
