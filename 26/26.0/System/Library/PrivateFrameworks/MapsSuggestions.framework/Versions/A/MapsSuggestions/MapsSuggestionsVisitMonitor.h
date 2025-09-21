@class CLVisit, NSString, MapsSuggestionsSimpleTrigger, MapsSuggestionsBlockCondition;
@protocol MapsSuggestionsLocationUpdater;

@interface MapsSuggestionsVisitMonitor : NSObject <MapsSuggestionsLocationVisitUpdaterDelegate, MapsSuggestionsObject> {
    id<MapsSuggestionsLocationUpdater> _locationUpdater;
    CLVisit *_latestVisit;
    BOOL _isInVisit;
}

@property (readonly, nonatomic) MapsSuggestionsSimpleTrigger *onEnterTrigger;
@property (readonly, nonatomic) MapsSuggestionsSimpleTrigger *onExitTrigger;
@property (readonly, nonatomic) MapsSuggestionsBlockCondition *isInVisitCondition;
@property (readonly, nonatomic) CLVisit *latestVisit;
@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startMonitoring;
- (void)didLeaveVisit:(id)a0;
- (void)didLoseLocationPermission;
- (id)initWithLocationUpdater:(id)a0 startInVisit:(BOOL)a1;
- (void)didEnterVisit:(id)a0;
- (void)didUpdateLocation:(id)a0;
- (void)stopMonitoring;
- (BOOL)isInVisit;
- (void).cxx_destruct;

@end
