@interface ATXTripDuetEvent : ATXDuetEvent

@property (readonly, nonatomic) int origin;
@property (readonly, nonatomic) int destination;
@property (readonly, nonatomic) double durationAtOrigin;

- (id)convertToUpcomingCommuteEventWithWindowDuration:(double)a0;
- (id)initWithOrigin:(int)a0 destination:(int)a1 durationAtOrigin:(double)a2 startDate:(id)a3 endDate:(id)a4;
- (id)identifier;
- (BOOL)isEqualToATXTripDuetEvent:(id)a0;
- (id)initWithCurrentContextStoreValuesWithOriginLOI:(id)a0 ignoreBeforeDate:(id)a1;
- (id)initWithCurrentContextStoreValues;
- (int)rtLocationToBMSemanticLocation:(long long)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
