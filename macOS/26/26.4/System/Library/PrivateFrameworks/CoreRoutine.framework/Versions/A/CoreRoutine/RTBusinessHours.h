@class NSArray;

@interface RTBusinessHours : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long hoursType;
@property (readonly, copy, nonatomic) NSArray *dailyHours;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithHoursType:(unsigned long long)a0 dailyHours:(id)a1;
- (BOOL)isEqualToBusinessHours:(id)a0;

@end
