@class EKRecurrenceEnd, NSDate;

@interface CalRecurrenceEnd : NSObject <NSCopying>

@property (retain, nonatomic) EKRecurrenceEnd *ekRecurrenceEnd;
@property (readonly) BOOL usesEndDate;
@property (readonly) NSDate *endDate;
@property (readonly) unsigned long long occurrenceCount;

+ (id)recurrenceEndWithEndDate:(id)a0;
+ (id)recurrenceEndWithOccurrenceCount:(unsigned long long)a0;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithEKRecurrenceEnd:(id)a0;
- (id)initWithEndDate:(id)a0;
- (id)initWithOccurrenceCount:(unsigned long long)a0;

@end
