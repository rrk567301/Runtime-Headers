@class NSString;

@interface HMDCompositeStringSetting : HMDCompositeSetting <HMDCompositeSettingsStringValueProviding>

@property (readonly, copy) NSString *stringValue;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (BOOL)isEqualValue:(id)a0;
- (id)initWithValue:(id)a0 readVersion:(id)a1 writeVersion:(id)a2;

@end
