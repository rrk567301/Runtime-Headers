@class NSDate;

@interface REMRecurrenceEnd : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) unsigned long long occurrenceCount;

+ (id)recurrenceEndWithEndDate:(id)a0;
+ (id)recurrenceEndWithOccurrenceCount:(unsigned long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEndDate:(id)a0;
- (id)initWithOccurrenceCount:(unsigned long long)a0;
- (char)usesEndDate;

@end
