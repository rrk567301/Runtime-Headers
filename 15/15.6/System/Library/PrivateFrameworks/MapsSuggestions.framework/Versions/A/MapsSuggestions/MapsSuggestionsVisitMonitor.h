@class CLVisit, NSString, MapsSuggestionsSimpleTrigger, MapsSuggestionsBlockCondition;
@protocol MapsSuggestionsLocationUpdater;

@interface MapsSuggestionsVisitMonitor : NSObject <MapsSuggestionsLocationVisitUpdaterDelegate, MapsSuggestionsObject> {
    id<MapsSuggestionsLocationUpdater> _locationUpdater;
    CLVisit *_latestVisit;
    char _isInVisit;
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

- (void).cxx_destruct;
- (void)startMonitoring;
- (void)stopMonitoring;
- (void)didEnterVisit:(id)a0;
- (void)didLeaveVisit:(id)a0;
- (void)didLoseLocationPermission;
- (void)didUpdateLocation:(id)a0;
- (id)initWithLocationUpdater:(id)a0 startInVisit:(char)a1;
- (char)isInVisit;

@end
