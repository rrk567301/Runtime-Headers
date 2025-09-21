@class NSNumber;

@interface HMDCompositeSettingNumberValue : HMDCompositeSettingValue <HMDCompositeSettingsNumberValueProviding>

@property (readonly, copy) NSNumber *numberValue;

- (void).cxx_destruct;
- (id)initWithValue:(id)a0;
- (id)attributeDescriptions;
- (char)isEqualValue:(id)a0;

@end
