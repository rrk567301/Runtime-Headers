@class HMFVersion;

@interface HMSettingVersionValue : HMImmutableSettingValue

@property (readonly) HMFVersion *version;
@property (readonly) long long type;

- (unsigned long long)hash;
- (id)initWithPayload:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)initWithVersion:(id)a0 type:(long long)a1;
- (id)payloadCopy;

@end
