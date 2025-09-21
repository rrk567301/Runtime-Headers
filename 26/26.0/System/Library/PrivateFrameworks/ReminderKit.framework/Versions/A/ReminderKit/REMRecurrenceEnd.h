@class NSDate;

@interface REMRecurrenceEnd : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) unsigned long long occurrenceCount;

+ (id)recurrenceEndWithEndDate:(id)a0;
+ (id)recurrenceEndWithOccurrenceCount:(unsigned long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithEndDate:(id)a0;
- (id)initWithOccurrenceCount:(unsigned long long)a0;
- (BOOL)usesEndDate;

@end
