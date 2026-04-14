@class NSString, CKEventMetric, NSDate;

@interface BRCEventMetric : NSObject

@property (readonly, nonatomic) NSString *eventName;
@property (retain, nonatomic) NSDate *startTime;
@property (retain, nonatomic) NSDate *endTime;
@property (nonatomic) BOOL isCKMetric;
@property (readonly, nonatomic) CKEventMetric *associatedCKEventMetricIfAvailable;

- (double)duration;
- (void)associateWithCompletedOperation:(id)a0;
- (id)associatedAppTelemetryEvent;
- (void).cxx_destruct;
- (id)description;
- (id)additionalPayload;
- (id)subDescription;
- (id)initWithEventName:(id)a0;

@end
