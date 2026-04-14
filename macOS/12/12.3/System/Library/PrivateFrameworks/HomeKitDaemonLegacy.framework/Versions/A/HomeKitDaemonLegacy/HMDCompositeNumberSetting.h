@class NSNumber;

@interface HMDCompositeNumberSetting : HMDCompositeSetting <HMDCompositeSettingsNumberValueProviding>

@property (readonly, copy) NSNumber *numberValue;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (BOOL)isEqualValue:(id)a0;
- (id)initWithValue:(id)a0 readVersion:(id)a1 writeVersion:(id)a2;

@end
