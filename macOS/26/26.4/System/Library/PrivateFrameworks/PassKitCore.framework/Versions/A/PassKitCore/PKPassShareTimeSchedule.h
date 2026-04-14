@class NSArray;

@interface PKPassShareTimeSchedule : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *hoursOfDay;
@property (retain, nonatomic) NSArray *daysOfWeek;
@property (retain, nonatomic) NSArray *daysOfMonth;
@property (nonatomic) unsigned long long interval;
@property (nonatomic) unsigned long long frequency;

+ (id)emptySchedule;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToPassShareTimeSchedule:(id)a0;
- (id)intersect:(id)a0;

@end
