@class NSString, NSArray;

@interface PRSConversionResult : PRSCalculatorResult <NSCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *localizedInputValueAndUnit;
@property (retain, nonatomic) NSString *conversionType;
@property (retain, nonatomic) NSArray *conversions;

- (id)groupName;
- (unsigned __int128)rank;
- (int)type;
- (unsigned __int128)score;
- (id)category;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)copyBasePropertiesOverToResult:(id)a0;
- (id)initWithConversion:(id)a0;
- (BOOL)isConversion;
- (BOOL)shouldNotBeTopHit;

@end
