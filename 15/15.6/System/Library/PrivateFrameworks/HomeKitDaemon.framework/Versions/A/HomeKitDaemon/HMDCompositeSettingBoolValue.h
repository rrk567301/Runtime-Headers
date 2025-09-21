@interface HMDCompositeSettingBoolValue : HMDCompositeSettingValue <HMDCompositeSettingsBoolValueProviding>

@property (readonly) char boolValue;

- (id)initWithValue:(char)a0;
- (id)attributeDescriptions;
- (char)isEqualValue:(id)a0;

@end
