@class RTVisit;

@interface RTPointOfInterestMonitorVisitNotification : RTNotification

@property (readonly, nonatomic) RTVisit *visit;

- (void).cxx_destruct;
- (id)init;
- (id)initWithVisit:(id)a0;

@end
