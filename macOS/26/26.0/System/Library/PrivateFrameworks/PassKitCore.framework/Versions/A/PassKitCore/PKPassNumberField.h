@class NSString;

@interface PKPassNumberField : PKPassField

@property (nonatomic) long long numberStyle;
@property (copy, nonatomic) NSString *currencyCode;

+ (BOOL)supportsSecureCoding;

- (id)asDictionary;
- (id)value;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)asMutableDictionary;

@end
