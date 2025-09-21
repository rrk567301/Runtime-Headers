@class NSString, CLCircularRegion;

@interface DNDModeConfigurationLocationTrigger : DNDModeConfigurationTrigger

@property (readonly, copy) CLCircularRegion *region;
@property (readonly, copy) NSString *detail;

+ (char)supportsSecureCoding;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRegion:(id)a0 detail:(id)a1 enabledSetting:(unsigned long long)a2;
- (char)hasSecureData;

@end
