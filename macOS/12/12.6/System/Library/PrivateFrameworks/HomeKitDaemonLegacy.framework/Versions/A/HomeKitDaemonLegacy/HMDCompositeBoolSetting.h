@interface HMDCompositeBoolSetting : HMDCompositeSetting <HMDCompositeSettingsBoolValueProviding>

@property (readonly) BOOL boolValue;

- (BOOL)isEqual:(id)a0;
- (id)attributeDescriptions;
- (BOOL)isEqualValue:(id)a0;
- (id)initWithValue:(BOOL)a0 readVersion:(id)a1 writeVersion:(id)a2;

@end
