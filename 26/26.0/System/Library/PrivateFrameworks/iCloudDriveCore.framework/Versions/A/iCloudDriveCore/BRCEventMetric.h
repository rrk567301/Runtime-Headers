@class NSString, CKEventMetric, NSDate;

@interface BRCEventMetric : NSObject

@property (readonly, nonatomic) NSString *eventName;
@property (retain, nonatomic) NSDate *startTime;
@property (retain, nonatomic) NSDate *endTime;
@property (nonatomic) BOOL isCKMetric;
@property (readonly, nonatomic) CKEventMetric *associatedCKEventMetricIfAvailable;

- (id)additionalPayload;
- (id)associatedAppTelemetryEvent;
- (id)initWithEventName:(id)a0;
- (id)description;
- (double)duration;
- (void)associateWithCompletedOperation:(id)a0;
- (id)subDescription;
- (void).cxx_destruct;

@end
