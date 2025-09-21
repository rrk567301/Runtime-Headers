@interface PKPassDateField : PKPassField

@property (nonatomic) long long dateStyle;
@property (nonatomic) long long timeStyle;
@property (nonatomic) char isRelative;
@property (nonatomic) char ignoresTimeZone;

+ (char)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)value;
- (id)asDictionary;
- (id)asMutableDictionary;

@end
