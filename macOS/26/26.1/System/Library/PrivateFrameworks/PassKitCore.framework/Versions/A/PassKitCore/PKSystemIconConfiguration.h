@class NSString, PKSystemIconConfigurationColor;

@interface PKSystemIconConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *imageName;
@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) PKSystemIconConfigurationColor *color1;
@property (retain, nonatomic) PKSystemIconConfigurationColor *color2;
@property (retain, nonatomic) PKSystemIconConfigurationColor *color3;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)_init;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
