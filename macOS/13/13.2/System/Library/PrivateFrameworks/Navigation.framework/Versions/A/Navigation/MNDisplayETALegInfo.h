@class NSTimeZone, NSDate;

@interface MNDisplayETALegInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long legIndex;
@property (nonatomic) unsigned long long remainingMinutes;
@property (retain, nonatomic) NSDate *eta;
@property (retain, nonatomic) NSTimeZone *timeZone;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
