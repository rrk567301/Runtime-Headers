@class EKRecurrenceEnd, NSDate;

@interface CalRecurrenceEnd : NSObject <NSCopying>

@property (retain, nonatomic) EKRecurrenceEnd *ekRecurrenceEnd;
@property (readonly) BOOL usesEndDate;
@property (readonly) NSDate *endDate;
@property (readonly) unsigned long long occurrenceCount;

+ (id)recurrenceEndWithEndDate:(id)a0;
+ (id)recurrenceEndWithOccurrenceCount:(unsigned long long)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithEndDate:(id)a0;
- (id)initWithOccurrenceCount:(unsigned long long)a0;
- (id)initWithEKRecurrenceEnd:(id)a0;

@end
