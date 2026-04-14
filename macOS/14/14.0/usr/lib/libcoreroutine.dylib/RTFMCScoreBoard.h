@class NSDate;

@interface RTFMCScoreBoard : NSObject

@property (retain, nonatomic) NSDate *creationDate;
@property (nonatomic) int locationType;
@property (nonatomic) BOOL engaged;
@property (nonatomic) BOOL assisted;
@property (nonatomic) int parkingEvents;
@property (nonatomic) int engagedParkingEvents;
@property (nonatomic) int assistedParkingEvents;
@property (nonatomic) int engagements;
@property (nonatomic) int assistances;
@property (nonatomic) int suppressedEvents;

- (id)init;
- (void).cxx_destruct;
- (void)assistanceEvent;
- (void)suppressedEvent;
- (void)clearScoreBoard;
- (void)engagementEvent;
- (void)copyToMetric:(id)a0;
- (id)initWithLocationType:(int)a0;
- (void)parkingEvent;

@end
