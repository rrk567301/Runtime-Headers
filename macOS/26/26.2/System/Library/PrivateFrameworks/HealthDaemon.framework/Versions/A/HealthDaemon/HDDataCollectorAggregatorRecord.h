@class NSString, HDDataAggregator, HDDataCollectorConfiguration;
@protocol HDCollectedSensorDatum;

@interface HDDataCollectorAggregatorRecord : NSObject {
    BOOL _hasSetLastSensorDatum;
    HDDataAggregator *_aggregator;
    NSString *_identifier;
    HDDataCollectorConfiguration *_configuration;
    id<HDCollectedSensorDatum> _lastSensorDatum;
}

- (void).cxx_destruct;
- (id)description;

@end
