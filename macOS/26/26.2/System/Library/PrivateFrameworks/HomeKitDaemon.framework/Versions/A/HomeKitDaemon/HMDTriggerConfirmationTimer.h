@class NSUUID;

@interface HMDTriggerConfirmationTimer : HMFTimer

@property (readonly, nonatomic) NSUUID *executionSessionID;

- (id)initWithExecutionSessionID:(id)a0 timeoutInterval:(double)a1;
- (void).cxx_destruct;
- (id)description;

@end
