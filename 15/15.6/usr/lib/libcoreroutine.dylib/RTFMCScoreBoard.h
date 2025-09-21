@class NSDate;

@interface RTFMCScoreBoard : NSObject

@property (retain, nonatomic) NSDate *creationDate;
@property (nonatomic) int locationType;
@property (nonatomic) char engaged;
@property (nonatomic) char assisted;
@property (nonatomic) int parkingEvents;
@property (nonatomic) int engagedParkingEvents;
@property (nonatomic) int assistedParkingEvents;
@property (nonatomic) int engagements;
@property (nonatomic) int assistances;
@property (nonatomic) int suppressedEvents;

- (id)init;
- (void).cxx_destruct;
- (void)clearScoreBoard;
- (void)suppressedEvent;
- (void)assistanceEvent;
- (void)engagementEvent;
- (void)copyToMetric:(id)a0;
- (id)initWithLocationType:(int)a0;
- (void)parkingEvent;

@end
