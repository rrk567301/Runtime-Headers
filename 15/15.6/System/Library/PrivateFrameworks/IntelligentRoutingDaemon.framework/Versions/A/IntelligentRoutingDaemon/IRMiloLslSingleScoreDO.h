@class NSString;

@interface IRMiloLslSingleScoreDO : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) double score;
@property (readonly, nonatomic) NSString *eventID;

+ (id)miloLslSingleScoreDOWithScore:(double)a0 eventID:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithReplacementEventID:(id)a0;
- (id)copyWithReplacementScore:(double)a0;
- (id)initWithScore:(double)a0 eventID:(id)a1;
- (char)isEqualToMiloLslSingleScoreDO:(id)a0;

@end
