@class NSString, NSArray;

@interface PRSConversionResult : PRSCalculatorResult <NSCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *localizedInputValueAndUnit;
@property (retain, nonatomic) NSString *conversionType;
@property (retain, nonatomic) NSArray *conversions;

- (id)groupName;
- (id)category;
- (id)initWithCoder:(id)a0;
- (unsigned __int128)score;
- (void)encodeWithCoder:(id)a0;
- (int)type;
- (void).cxx_destruct;
- (unsigned __int128)rank;
- (void)copyBasePropertiesOverToResult:(id)a0;
- (id)initWithConversion:(id)a0;
- (BOOL)isConversion;
- (BOOL)shouldNotBeTopHit;

@end
