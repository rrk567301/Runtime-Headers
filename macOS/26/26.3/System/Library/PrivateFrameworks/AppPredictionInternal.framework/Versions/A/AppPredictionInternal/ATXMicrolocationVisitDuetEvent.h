@class NSUUID, NSDictionary;

@interface ATXMicrolocationVisitDuetEvent : ATXDuetEvent

@property (readonly, nonatomic) NSUUID *dominantMicrolocationUUID;
@property (readonly, nonatomic) NSDictionary *microlocationUUIDProbabilities;

+ (id)mapVisitProbabilitiesByUUID:(id)a0;

- (id)initWithCurrentContextStoreValues;
- (id)identifier;
- (id)description;
- (void).cxx_destruct;
- (id)initWithATXEvent:(id)a0;
- (id)initWithCurrentContextStoreValuesWithTwoHourLimit:(BOOL)a0;
- (id)initWithDominantMicrolocationUUID:(id)a0 microlocationProbabilities:(id)a1 startDate:(id)a2 endDate:(id)a3;

@end
