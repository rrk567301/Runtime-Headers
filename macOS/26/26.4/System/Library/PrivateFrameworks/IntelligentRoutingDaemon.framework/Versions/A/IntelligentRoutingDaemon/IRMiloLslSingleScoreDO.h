@class NSString, NSDate;

@interface IRMiloLslSingleScoreDO : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double score;
@property (readonly, nonatomic) NSString *eventID;
@property (readonly, nonatomic) NSDate *timestamp;

+ (id)miloLslSingleScoreDOWithScore:(double)a0 eventID:(id)a1 timestamp:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithReplacementEventID:(id)a0;
- (id)copyWithReplacementScore:(double)a0;
- (id)copyWithReplacementTimestamp:(id)a0;
- (id)initWithScore:(double)a0 eventID:(id)a1 timestamp:(id)a2;
- (BOOL)isEqualToMiloLslSingleScoreDO:(id)a0;

@end
