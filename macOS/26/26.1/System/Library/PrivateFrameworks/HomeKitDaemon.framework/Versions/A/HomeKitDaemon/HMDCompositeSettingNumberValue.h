@class NSNumber;

@interface HMDCompositeSettingNumberValue : HMDCompositeSettingValue <HMDCompositeSettingsNumberValueProviding>

@property (readonly, copy) NSNumber *numberValue;

- (id)attributeDescriptions;
- (id)initWithValue:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualValue:(id)a0;

@end
