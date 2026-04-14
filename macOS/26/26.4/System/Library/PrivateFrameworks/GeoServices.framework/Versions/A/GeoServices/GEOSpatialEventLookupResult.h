@class NSMapTable;

@interface GEOSpatialEventLookupResult : NSObject {
    NSMapTable *_parametersToEventsMap;
}

- (id)initWithMapTable:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)poiEventsForSpatialLookupParameters:(id)a0;

@end
