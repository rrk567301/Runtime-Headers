@class NSNumber;

@interface IDSGFTMetricsReferencePointEvent : NSObject

@property (copy) NSNumber *reason;
@property (copy) NSNumber *time;

- (void).cxx_destruct;
- (id)description;
- (id)initWithTime:(id)a0 reason:(id)a1;

@end
