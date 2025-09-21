@interface BDSReadingHistoryDayInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long readingTime;
@property (nonatomic) long long goal;
@property (nonatomic) char isStreakDay;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithReadingTime:(long long)a0 goal:(long long)a1 isStreakDay:(char)a2;

@end
