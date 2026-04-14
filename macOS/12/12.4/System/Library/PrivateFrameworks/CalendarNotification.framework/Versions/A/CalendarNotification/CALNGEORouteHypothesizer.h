@class GEORouteHypothesizer, EKTravelEngineHypothesis, NSString;

@interface CALNGEORouteHypothesizer : NSObject <CALNRouteHypothesizer>

@property (readonly, nonatomic) GEORouteHypothesizer *routeHypothesizer;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) EKTravelEngineHypothesis *currentHypothesis;
@property (readonly, nonatomic) id /* block */ updateHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)startHypothesizingWithUpdateHandler:(id /* block */)a0;
- (void)stopHypothesizing;
- (void)requestRefresh;
- (void)didPostUINotification:(unsigned long long)a0;
- (id)initWithRouteHypothesizer:(id)a0;

@end
