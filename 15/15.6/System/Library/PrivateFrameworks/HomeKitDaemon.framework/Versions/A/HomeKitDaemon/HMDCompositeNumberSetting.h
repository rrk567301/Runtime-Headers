@class NSNumber;

@interface HMDCompositeNumberSetting : HMDCompositeSetting <HMDCompositeSettingsNumberValueProviding>

@property (readonly, copy) NSNumber *numberValue;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithValue:(id)a0 readVersion:(id)a1 writeVersion:(id)a2;
- (char)isEqualValue:(id)a0;

@end
