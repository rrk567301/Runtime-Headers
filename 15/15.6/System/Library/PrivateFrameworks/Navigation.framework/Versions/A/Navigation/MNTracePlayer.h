@class NSString, MNTracePlayerTimelineStream, MNTrace, GEOObserverHashTable, MNLocation, MNTracePlayerScheduler, MNTracePlayerETAUpdater, MNSessionUpdateManager, NSMutableArray;

@interface MNTracePlayer : NSObject <MNTracePlayerSchedulerDelegate, MNTimeProvider> {
    double _traceStartTimestamp;
    GEOObserverHashTable *_observers;
    MNTracePlayerScheduler *_scheduler;
    MNTracePlayerTimelineStream *_locationStream;
    MNLocation *_lastReportedLocation;
    MNTracePlayerETAUpdater *_etaUpdater;
    MNTracePlayerTimelineStream *_etaUpdatesStream;
    MNTracePlayerTimelineStream *_networkEventsStream;
    NSMutableArray *_processedWaypointEvents;
}

@property (readonly, nonatomic) MNTrace *trace;
@property (readonly, nonatomic) char isPlaying;
@property (readonly, nonatomic) char isPaused;
@property (readonly, nonatomic) double position;
@property (readonly, nonatomic) double duration;
@property (nonatomic) double speedMultiplier;
@property (nonatomic) char shouldUpdateRouteWhenJumping;
@property (nonatomic) char shouldPlayNetworkEvents;
@property (nonatomic) char shouldPlayETARequests;
@property (readonly, nonatomic) MNSessionUpdateManager *sessionUpdater;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double currentTime;

- (void)dealloc;
- (void).cxx_destruct;
- (void)resume;
- (void)pause;
- (void)start;
- (id)initWithPath:(id)a0;
- (void)stop;
- (void)unregisterObserver:(id)a0;
- (void)registerObserver:(id)a0;
- (id)_changeRouteRowForTimestamp:(double)a0;
- (void)_createTimelineStreams;
- (id)_directionsRowForChangeRouteRow:(id)a0;
- (unsigned long long)_directionsRowIndexBeforeTimestamp:(double)a0;
- (id)_etauRowForChangeRouteRow:(id)a0;
- (id)_locationRowBeforeTimestamp:(double)a0;
- (id)_locationWithCurrentDate:(id)a0;
- (id)_routeForRouteChangeRow:(id)a0;
- (id)guidanceEventNearTimestamp:(double)a0;
- (id)initWithPath:(id)a0 outError:(id *)a1;
- (id)initWithTrace:(id)a0;
- (void)jumpToBookmarkAtIndex:(unsigned long long)a0;
- (void)jumpToLocationAtIndex:(unsigned long long)a0;
- (void)jumpToTime:(double)a0;
- (char)requestDirectionsNearTimestamp:(double)a0 withHandler:(id /* block */)a1;
- (void)skipByTimeInterval:(double)a0;
- (void)startAtLocationIndex:(unsigned long long)a0;
- (void)tracePlayerScheduler:(id)a0 didUpdatePosition:(double)a1;

@end
