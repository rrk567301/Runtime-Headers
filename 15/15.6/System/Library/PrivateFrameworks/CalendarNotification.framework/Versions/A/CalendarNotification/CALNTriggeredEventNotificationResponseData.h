@class EKTravelEngineHypothesis, NSDate;

@interface CALNTriggeredEventNotificationResponseData : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) EKTravelEngineHypothesis *hypothesis;
@property (readonly, copy, nonatomic) NSDate *lastFireTimeOfAlertOffsetFromTravelTime;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithHypothesis:(id)a0 lastFireTimeOfAlertOffsetFromTravelTime:(id)a1;

@end
