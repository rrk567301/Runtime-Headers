@class NSUUID, NSTimeZone, NSDate;

@interface MNDisplayETALegInfo : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSUUID *waypointID;
@property (nonatomic) unsigned long long legIndex;
@property (nonatomic) unsigned long long remainingMinutes;
@property (retain, nonatomic) NSDate *eta;
@property (retain, nonatomic) NSTimeZone *timeZone;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
