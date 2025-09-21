@class NSUUID, NSDate, RTPredictedContextResult;

@interface RTPredictedContextRequest : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) RTPredictedContextResult *predictedContextResult;
@property (readonly, copy, nonatomic) NSDate *requestStartDate;
@property (readonly, copy, nonatomic) NSDate *requestEndDate;
@property (readonly, nonatomic) double memoryFootprintStart;
@property (readonly, nonatomic) double memoryFootprintEnd;
@property (readonly, nonatomic) long long inferenceTriggerReason;
@property (readonly, nonatomic) unsigned long long clientCount;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 predictedContextResult:(id)a1 requestStartDate:(id)a2 requestEndDate:(id)a3 inferenceTriggerReason:(long long)a4 memoryFootprintStart:(double)a5 memoryFootprintEnd:(double)a6 clientCount:(unsigned long long)a7;
- (id)inferenceTriggerReasonToString;

@end
