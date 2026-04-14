@interface ATXTripDuetEvent : ATXDuetEvent

@property (readonly, nonatomic) int origin;
@property (readonly, nonatomic) int destination;
@property (readonly, nonatomic) double durationAtOrigin;

- (id)initWithOrigin:(int)a0 destination:(int)a1 durationAtOrigin:(double)a2 startDate:(id)a3 endDate:(id)a4;
- (int)rtLocationToBMSemanticLocation:(long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCurrentContextStoreValuesWithOriginLOI:(id)a0 ignoreBeforeDate:(id)a1;
- (id)initWithCurrentContextStoreValues;
- (id)convertToUpcomingCommuteEventWithWindowDuration:(double)a0;
- (id)description;
- (BOOL)isEqualToATXTripDuetEvent:(id)a0;
- (id)identifier;

@end
