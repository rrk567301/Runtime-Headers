@class HMFVersion;

@interface HMSettingVersionValue : HMImmutableSettingValue

@property (readonly) HMFVersion *version;
@property (readonly) long long type;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithPayload:(id)a0;
- (id)attributeDescriptions;
- (id)payloadCopy;
- (id)initWithVersion:(id)a0 type:(long long)a1;

@end
