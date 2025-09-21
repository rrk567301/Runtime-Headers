@class NSString, CLCircularRegion;

@interface DNDModeConfigurationLocationTrigger : DNDModeConfigurationTrigger

@property (readonly, copy) CLCircularRegion *region;
@property (readonly, copy) NSString *detail;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)hasSecureData;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithRegion:(id)a0 detail:(id)a1 enabledSetting:(unsigned long long)a2;

@end
