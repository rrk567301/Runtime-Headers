@class NSString, NSDictionary;

@interface CSLocalizedString : NSString <CSCoderEncoder>

@property (readonly, nonatomic) NSString *defaultString;
@property (nonatomic) BOOL didTrySettingDefaultString;
@property (readonly, nonatomic) NSDictionary *localizedStrings;

+ (BOOL)supportsSecureCoding;

- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCSCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLocalizedStrings:(id)a0;
- (unsigned long long)length;
- (void).cxx_destruct;
- (id)localizedString;

@end
