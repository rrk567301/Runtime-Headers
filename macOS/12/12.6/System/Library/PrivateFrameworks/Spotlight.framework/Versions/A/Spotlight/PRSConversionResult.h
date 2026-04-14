@class NSString, NSNumber, NSArray;

@interface PRSConversionResult : PRSCalculatorResult <NSCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *inputUnit;
@property (readonly) NSNumber *inputValue;
@property (readonly) NSString *localizedInputValueAndUnit;
@property (readonly) NSString *conversionType;
@property (readonly) NSArray *conversions;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (int)type;
- (id)category;
- (unsigned __int128)score;
- (id)groupName;
- (unsigned __int128)rank;
- (BOOL)shouldNotBeTopHit;
- (id)initWithConverter:(id)a0;
- (BOOL)isConversion;

@end
