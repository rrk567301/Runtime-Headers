@class NSArray, WFNextHourPrecipitationDescription, NSDate;

@interface WFNextHourPrecipitation : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDate *readDate;
@property (readonly, copy, nonatomic) NSDate *startDate;
@property (readonly, copy, nonatomic) NSDate *expirationDate;
@property (readonly, copy, nonatomic) NSArray *minutes;
@property (readonly, copy, nonatomic) NSArray *precipitationDescriptions;
@property (readonly, copy, nonatomic) NSArray *conditions;
@property (readonly, nonatomic) char isRelevant;
@property (readonly, nonatomic) WFNextHourPrecipitationDescription *currentDescription;
@property (readonly, nonatomic) NSArray *activeMinutes;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithReadDate:(id)a0 startDate:(id)a1 expirationDate:(id)a2 minutes:(id)a3 conditions:(id)a4 descriptions:(id)a5;

@end
