@class NSString;

@interface PKPassShareActivationOption : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSString *value;
@property (nonatomic) long long valueLength;
@property (readonly, nonatomic) char requiresActivationCode;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSString *localizationKeyPostfix;

+ (id)vehicleEnteredPin;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (id)initWithIdentifier:(id)a0 type:(unsigned long long)a1;
- (id)initWithCarKeyIdentifier:(id)a0;
- (id)initWithDefaultIdentifierForType:(unsigned long long)a0;
- (char)isEqualToPassShareActivationOption:(id)a0;

@end
