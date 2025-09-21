@class NSDateInterval, NSPredicate, NSDate;

@interface ATXActionCriteria : NSObject <NSCopying, NSSecureCoding, ATXProtoBufWrapper>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) char lockScreenEligible;
@property (readonly, nonatomic) NSDateInterval *dateInterval;
@property (readonly, nonatomic) NSPredicate *predicate;

+ (id)predicateValidForAirplaneModeOn:(char)a0;
+ (id)predicateValidForDNDStatusOn:(char)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)json;
- (id)encodeAsProto;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (id)initWithProto:(id)a0;
- (char)isRelevant:(id)a0;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 lockScreenEligible:(char)a2 predicate:(id)a3;

@end
