@class NSString, NSXPCConnection, NSObject;
@protocol MapsSuggestionsInsightsUpdates, OS_dispatch_queue, OS_dispatch_source;

@interface MapsSuggestionsRealInsights : NSObject <MapsSuggestionsSignalPipelineUpdateProxy, MapsSuggestionsInsights> {
    struct Queue { NSObject<OS_dispatch_queue> *_innerQueue; NSString *_name; } _queue;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_source> *_closeTimer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MapsSuggestionsInsightsUpdates> insightUpdatesDelegate;
@property (readonly, nonatomic) NSString *uniqueName;

- (BOOL)userHasAnExpressPaymentCard;
- (char)signalPackForDestinationMapItem:(id)a0 originCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1 handler:(id /* block */)a2;
- (id)initFromResourceDepot:(id)a0;
- (BOOL)isTransitUserHere;
- (void)signalPackUpdated:(id)a0;
- (id)signalPackForDestinationEntry:(id)a0 originCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1;
- (void)preload;
- (id)signalPackForDestinationMapItem:(id)a0 originCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1;
- (void).cxx_destruct;
- (double)isTouristHere;
- (BOOL)isTransitUser;
- (id).cxx_construct;
- (char)signalPackForHereWithHandler:(id /* block */)a0;
- (BOOL)userHasAPaymentCard;
- (id)confidenceScoresForMapItems:(id)a0;
- (BOOL)userHasATransitCard;
- (void)dealloc;
- (char)signalPackForDestinationEntry:(id)a0 originCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1 handler:(id /* block */)a2;
- (BOOL)userHasAnUpcomingTrip;
- (BOOL)userIsCurrentlyInATrip;
- (id)signalPackForHere;
- (id)confidenceScoresForContacts:(id)a0 addresses:(id)a1;

@end
