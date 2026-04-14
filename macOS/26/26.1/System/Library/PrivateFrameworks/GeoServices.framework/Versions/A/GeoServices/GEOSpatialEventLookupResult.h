@class NSMapTable;

@interface GEOSpatialEventLookupResult : NSObject {
    NSMapTable *_parametersToEventsMap;
}

- (void).cxx_destruct;
- (id)initWithMapTable:(id)a0;
- (id)init;
- (id)poiEventsForSpatialLookupParameters:(id)a0;

@end
