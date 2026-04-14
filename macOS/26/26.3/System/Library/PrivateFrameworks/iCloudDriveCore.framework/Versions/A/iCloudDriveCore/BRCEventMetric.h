@class NSString, CKEventMetric, NSDate;

@interface BRCEventMetric : NSObject

@property (readonly, nonatomic) NSString *eventName;
@property (retain, nonatomic) NSDate *startTime;
@property (retain, nonatomic) NSDate *endTime;
@property (nonatomic) BOOL isCKMetric;
@property (readonly, nonatomic) CKEventMetric *associatedCKEventMetricIfAvailable;

- (double)duration;
- (id)description;
- (id)subDescription;
- (id)associatedAppTelemetryEvent;
- (id)additionalPayload;
- (void).cxx_destruct;
- (id)initWithEventName:(id)a0;
- (void)associateWithCompletedOperation:(id)a0;

@end
