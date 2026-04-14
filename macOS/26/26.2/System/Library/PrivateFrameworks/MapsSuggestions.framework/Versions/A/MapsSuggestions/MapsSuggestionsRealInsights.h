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

- (BOOL)userHasATransitCard;
- (BOOL)isTransitUser;
- (BOOL)userHasAnUpcomingTrip;
- (double)isTouristHere;
- (id)signalPackForDestinationMapItem:(id)a0 originCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1;
- (BOOL)userHasAPaymentCard;
- (BOOL)userIsCurrentlyInATrip;
- (id)signalPackForDestinationEntry:(id)a0 originCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1;
- (id)signalPackForHere;
- (id)confidenceScoresForContacts:(id)a0 addresses:(id)a1;
- (char)signalPackForHereWithHandler:(id /* block */)a0;
- (id)confidenceScoresForMapItems:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (char)signalPackForDestinationMapItem:(id)a0 originCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1 handler:(id /* block */)a2;
- (BOOL)isTransitUserHere;
- (BOOL)userHasAnExpressPaymentCard;
- (void)signalPackUpdated:(id)a0;
- (char)signalPackForDestinationEntry:(id)a0 originCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1 handler:(id /* block */)a2;
- (void)preload;
- (id)initFromResourceDepot:(id)a0;
- (void)dealloc;

@end
