@class NSString;

@interface IRMiloLslSingleScoreDO : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double score;
@property (readonly, nonatomic) NSString *eventID;

+ (id)miloLslSingleScoreDOWithScore:(double)a0 eventID:(id)a1;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithReplacementEventID:(id)a0;
- (id)copyWithReplacementScore:(double)a0;
- (id)initWithScore:(double)a0 eventID:(id)a1;
- (BOOL)isEqualToMiloLslSingleScoreDO:(id)a0;

@end
