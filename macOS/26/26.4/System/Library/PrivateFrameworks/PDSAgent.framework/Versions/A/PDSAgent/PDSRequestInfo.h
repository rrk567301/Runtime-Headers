@class NSDate;

@interface PDSRequestInfo : NSObject

@property (nonatomic) unsigned long long regReason;
@property (retain, nonatomic) NSDate *heartbeatDate;

- (void).cxx_destruct;
- (id)init;
- (id)initWithRegistrationReason:(unsigned long long)a0 nextHeartbeatDate:(id)a1;

@end
