@class NSDate;

@interface CHSTimelineEntryRelevance : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) char hasRelevance;
@property (readonly, nonatomic) double score;
@property (readonly, nonatomic) double duration;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDate:(id)a0;
- (id)initWithTimelineEntryRelevance:(id)a0;
- (id)initWithDate:(id)a0 score:(double)a1 duration:(double)a2;

@end
