@class NSString, NSDate;

@interface WFChangeForecast : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSString *descriptionSameTimeZone;
@property (readonly, nonatomic) NSString *descriptionDifferentTimeZone;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDate:(id)a0 descriptionSameTimeZone:(id)a1 descriptionDifferentTimeZone:(id)a2;

@end
