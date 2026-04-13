@class NSDate;

@interface CalRecurrenceEnd : NSObject <NSCopying>

@property (readonly) BOOL usesEndDate;
@property (readonly) NSDate *endDate;
@property (readonly) unsigned long long occurrenceCount;

+ (id)recurrenceEndWithEndDate:(id)a0;
+ (id)recurrenceEndWithOccurrenceCount:(unsigned long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)initWithEndDate:(id)a0;
- (id)initWithOccurrenceCount:(unsigned long long)a0;

@end
