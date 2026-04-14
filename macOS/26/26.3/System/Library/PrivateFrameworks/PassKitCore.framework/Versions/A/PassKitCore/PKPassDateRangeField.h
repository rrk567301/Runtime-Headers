@class NSString, NSDate;

@interface PKPassDateRangeField : PKPassDateField

@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSDate *endDate;
@property (copy, nonatomic) NSString *displayableStartDate;
@property (copy, nonatomic) NSString *displayableEndDate;

+ (BOOL)supportsSecureCoding;

- (id)asDictionary;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)value;
- (id)_displayableDate:(id)a0;
- (id)asMuteDictionary;

@end
