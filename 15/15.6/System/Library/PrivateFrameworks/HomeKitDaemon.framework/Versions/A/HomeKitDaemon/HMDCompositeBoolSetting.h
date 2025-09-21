@interface HMDCompositeBoolSetting : HMDCompositeSetting <HMDCompositeSettingsBoolValueProviding>

@property (readonly) char boolValue;

- (char)isEqual:(id)a0;
- (id)attributeDescriptions;
- (id)initWithValue:(char)a0 readVersion:(id)a1 writeVersion:(id)a2;
- (char)isEqualValue:(id)a0;

@end
