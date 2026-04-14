@class NSDecimalNumber, NSString;

@interface PKNumericSuggestion : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDecimalNumber *value;
@property (readonly, copy, nonatomic) NSString *currencyCode;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *displayValue;
@property (nonatomic) BOOL usedMaximumSuggestion;

+ (id)suggestionWithTitle:(id)a0 value:(id)a1 currencyCode:(id)a2;
+ (id)suggestionWithValue:(id)a0 currencyCode:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)_initWithTitle:(id)a0 value:(id)a1 currencyCode:(id)a2;

@end
