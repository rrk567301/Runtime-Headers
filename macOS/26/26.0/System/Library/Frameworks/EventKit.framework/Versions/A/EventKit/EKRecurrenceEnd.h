@class NSString, NSDate;

@interface EKRecurrenceEnd : NSObject <EKRecurrenceEndModel, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL usesEndDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) unsigned long long occurrenceCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)recurrenceEndWithEndDate:(id)a0;
+ (id)recurrenceEndWithOccurrenceCount:(unsigned long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithEndDate:(id)a0;
- (id)initWithOccurrenceCount:(unsigned long long)a0;

@end
