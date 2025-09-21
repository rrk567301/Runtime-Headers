@class MapsSuggestionsQueue, NSString, MapsSuggestionsCanKicker, CLLocation;
@protocol MapsSuggestionsLocationUpdater;

@interface MapsSuggestionsRangeTrigger : MapsSuggestionsBaseTrigger <MapsSuggestionsLocationUpdaterDelegate> {
    CLLocation *_destinationLocation;
    double _radius;
    BOOL _onEnter;
    double _forceUpdateTime;
    id<MapsSuggestionsLocationUpdater> _locationUpdater;
    id<MapsSuggestionsLocationUpdater> _forcingLocationUpdater;
    MapsSuggestionsCanKicker *_locationForceUpdate;
    MapsSuggestionsQueue *_queue;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didAddFirstObserver;
- (void)didRemoveLastObserver;
- (void)didLoseLocationPermission;
- (void)stop;
- (void)didUpdateLocation:(id)a0;
- (void).cxx_destruct;
- (id)initWithLocation:(id)a0 radius:(double)a1 onEnter:(BOOL)a2 minUpdateTime:(double)a3 locationUpdater:(id)a4 forcingLocationUpdater:(id)a5;
- (BOOL)withinRange:(id)a0;

@end
