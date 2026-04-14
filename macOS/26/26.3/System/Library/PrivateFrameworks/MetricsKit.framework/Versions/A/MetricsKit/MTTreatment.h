@class MTMetricsDataPredicate, MTTreatmentAction, NSDictionary;

@interface MTTreatment : NSObject

@property (retain) MTMetricsDataPredicate *predicate;
@property (retain) MTTreatmentAction *eventAction;
@property (retain) NSDictionary *fieldActions;

+ (id)treatmentWithConfigData:(id)a0;

- (id)initWithConfigDictionary:(id)a0;
- (void).cxx_destruct;
- (id)performTreatment:(id)a0;

@end
