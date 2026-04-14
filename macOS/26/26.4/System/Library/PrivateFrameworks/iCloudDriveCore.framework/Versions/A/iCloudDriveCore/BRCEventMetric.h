@class NSString, CKEventMetric, NSDate;

@interface BRCEventMetric : NSObject

@property (readonly, nonatomic) NSString *eventName;
@property (retain, nonatomic) NSDate *startTime;
@property (retain, nonatomic) NSDate *endTime;
@property (nonatomic) BOOL isCKMetric;
@property (readonly, nonatomic) CKEventMetric *associatedCKEventMetricIfAvailable;

- (id)initWithEventName:(id)a0;
- (void)associateWithCompletedOperation:(id)a0;
- (id)additionalPayload;
- (double)duration;
- (void).cxx_destruct;
- (id)associatedAppTelemetryEvent;
- (id)subDescription;
- (id)description;

@end
