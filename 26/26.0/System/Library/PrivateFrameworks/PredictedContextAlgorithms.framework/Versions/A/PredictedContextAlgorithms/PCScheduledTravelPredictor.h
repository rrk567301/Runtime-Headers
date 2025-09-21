@interface PCScheduledTravelPredictor : NSObject

+ (id)findFirstVisitWithin24HoursAfterNavigationSession:(id)a0 visitHistory:(id)a1;
+ (void)computeWithScheduledTravelWithActiveNav:(id)a0 previousNav:(id)a1;
+ (double)estimateTravelTimeForCurrentLocation:(id)a0 destination:(id)a1;
+ (void)predictWithScheduledTravelWithActiveNav:(id)a0 previousNav:(id)a1 visitHistory:(id)a2 locationHistory:(id)a3 atTime:(double)a4 results:(id *)a5;

@end
