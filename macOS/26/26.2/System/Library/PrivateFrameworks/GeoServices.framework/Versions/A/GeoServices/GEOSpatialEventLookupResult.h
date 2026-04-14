@class NSMapTable;

@interface GEOSpatialEventLookupResult : NSObject {
    NSMapTable *_parametersToEventsMap;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithMapTable:(id)a0;
- (id)poiEventsForSpatialLookupParameters:(id)a0;

@end
