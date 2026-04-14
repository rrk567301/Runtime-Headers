@class NSString;

@interface HMDCompositeSettingStringValue : HMDCompositeSettingValue <HMDCompositeSettingsStringValueProviding>

@property (readonly, copy) NSString *stringValue;

- (id)attributeDescriptions;
- (id)initWithValue:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualValue:(id)a0;

@end
