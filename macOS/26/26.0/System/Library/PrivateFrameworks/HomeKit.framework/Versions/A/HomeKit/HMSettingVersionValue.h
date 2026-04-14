@class HMFVersion;

@interface HMSettingVersionValue : HMImmutableSettingValue

@property (readonly) HMFVersion *version;
@property (readonly) long long type;

- (id)attributeDescriptions;
- (id)initWithPayload:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithVersion:(id)a0 type:(long long)a1;
- (id)payloadCopy;

@end
