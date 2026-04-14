@class NSString, PKSystemIconConfigurationColor;

@interface PKSystemIconConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *imageName;
@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) PKSystemIconConfigurationColor *color1;
@property (retain, nonatomic) PKSystemIconConfigurationColor *color2;
@property (retain, nonatomic) PKSystemIconConfigurationColor *color3;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_init;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;

@end
