@class NSString;

@interface PKPassShareActivationOption : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSString *value;
@property (nonatomic) long long valueLength;
@property (readonly, nonatomic) BOOL requiresActivationCode;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSString *localizationKeyPostfix;
@property (readonly, nonatomic) NSString *localizationKeyPostfixForInitiation;

+ (id)vehicleEnteredPin;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithIdentifier:(id)a0 type:(unsigned long long)a1;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)redactedDescription;
- (id)initWithCarKeyIdentifier:(id)a0;
- (id)initWithDefaultIdentifierForType:(unsigned long long)a0;
- (BOOL)isEqualToPassShareActivationOption:(id)a0;

@end
