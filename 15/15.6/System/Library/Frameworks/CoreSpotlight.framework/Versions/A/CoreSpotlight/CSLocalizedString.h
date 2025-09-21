@class NSString, NSDictionary;

@interface CSLocalizedString : NSString <CSCoderEncoder>

@property (readonly, nonatomic) NSString *defaultString;
@property (nonatomic) char didTrySettingDefaultString;
@property (readonly, nonatomic) NSDictionary *localizedStrings;

+ (char)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)length;
- (void).cxx_destruct;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithCoder:(id)a0;
- (id)localizedString;
- (void)encodeWithCSCoder:(id)a0;
- (id)initWithLocalizedStrings:(id)a0;

@end
