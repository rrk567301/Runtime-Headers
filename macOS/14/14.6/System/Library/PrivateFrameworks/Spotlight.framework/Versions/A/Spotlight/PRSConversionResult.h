@class NSString, NSArray;

@interface PRSConversionResult : PRSCalculatorResult <NSCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *localizedInputValueAndUnit;
@property (readonly) NSString *conversionType;
@property (readonly) NSArray *conversions;

- (void).cxx_destruct;
- (int)type;
- (id)category;
- (unsigned __int128)score;
- (id)groupName;
- (unsigned __int128)rank;
- (id)initWithConversion:(id)a0;
- (BOOL)isConversion;
- (BOOL)shouldNotBeTopHit;

@end
