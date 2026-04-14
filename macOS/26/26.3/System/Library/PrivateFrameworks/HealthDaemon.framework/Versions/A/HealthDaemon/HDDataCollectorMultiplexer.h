@class NSDictionary, HDProfile, NSMapTable;
@protocol HDDataCollector;

@interface HDDataCollectorMultiplexer : NSObject {
    HDProfile *_profile;
    id<HDDataCollector> _collector;
    NSDictionary *_aggregatorsByType;
    NSMapTable *_recordsByAggregator;
}

- (void)setConfiguration:(id)a0 forAggregator:(id)a1;
- (void)registerForCollectionWithState:(id)a0;
- (void).cxx_destruct;
- (id)initForCollector:(id)a0 identifier:(id)a1 profile:(id)a2 types:(id)a3;
- (void)unregisterForCollection;
- (id)identifierForAggregator:(id)a0;
- (id)diagnosticDescription;
- (void)setLastSensorDatum:(id)a0 forAggregator:(id)a1;
- (id)lastDatumForType:(id)a0;
- (id)mergedConfiguration;
- (id)aggregatorForType:(id)a0;

@end
