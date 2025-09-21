@class NSString;

@interface HMDCompositeStringSetting : HMDCompositeSetting <HMDCompositeSettingsStringValueProviding>

@property (readonly, copy) NSString *stringValue;

- (id)attributeDescriptions;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithValue:(id)a0 readVersion:(id)a1 writeVersion:(id)a2;
- (BOOL)isEqualValue:(id)a0;

@end
