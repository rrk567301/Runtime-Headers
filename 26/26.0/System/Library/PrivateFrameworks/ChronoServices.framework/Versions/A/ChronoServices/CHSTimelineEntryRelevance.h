@class NSDate;

@interface CHSTimelineEntryRelevance : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) BOOL hasRelevance;
@property (readonly, nonatomic) double score;
@property (readonly, nonatomic) double duration;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithDate:(id)a0 score:(double)a1 duration:(double)a2;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDate:(id)a0;
- (id)initWithTimelineEntryRelevance:(id)a0;

@end
