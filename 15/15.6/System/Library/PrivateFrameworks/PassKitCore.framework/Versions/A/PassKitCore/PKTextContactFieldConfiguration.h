@class NSString, NSRegularExpression, NSCharacterSet;

@interface PKTextContactFieldConfiguration : PKContactFieldConfiguration <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) long long minLength;
@property (readonly, nonatomic) long long maxLength;
@property (readonly, nonatomic, getter=isNumeric) char numeric;
@property (readonly, copy, nonatomic) NSString *displayFormat;
@property (readonly, copy, nonatomic) NSString *displayFormatPlaceholder;
@property (readonly, nonatomic) char keepPaddingCharactersForSubmission;
@property (readonly, nonatomic) NSCharacterSet *characterSet;
@property (readonly, nonatomic) char isValidCharacterSet;
@property (readonly, nonatomic) NSRegularExpression *validRegex;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
