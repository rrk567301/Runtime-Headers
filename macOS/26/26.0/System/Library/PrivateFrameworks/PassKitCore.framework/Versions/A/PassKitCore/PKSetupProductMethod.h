@class NSString, NSArray, PKOSVersionRequirementRange;

@interface PKSetupProductMethod : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long type;
@property (readonly, copy, nonatomic) NSString *partnerIdentifier;
@property (readonly, copy, nonatomic) NSString *localizedTitle;
@property (readonly, copy, nonatomic) NSString *localizedDescription;
@property (readonly, copy, nonatomic) NSArray *regions;
@property (readonly, copy, nonatomic) PKOSVersionRequirementRange *requiredOSVersionRange;
@property (nonatomic, getter=isSupported) BOOL supported;

- (id)initWithDictionary:(id)a0;
- (id)initWithType:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0 partnerIdentifier:(id)a1;
- (void)_copyInto:(id)a0;
- (void)_decorateDescription:(id)a0;
- (id)_displayNameForCardType:(id)a0;
- (id)_inAppProvisioningURLWthScheme:(id)a0 path:(id)a1;
- (id)initWithDictionary:(id)a0 partnerIdentifier:(id)a1;

@end
