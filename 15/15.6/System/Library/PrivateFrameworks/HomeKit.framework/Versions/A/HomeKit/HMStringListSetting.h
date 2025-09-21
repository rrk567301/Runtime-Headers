@class NSArray;

@interface HMStringListSetting : HMImmutableSetting

@property (readonly, copy) NSArray *stringListValue;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithKeyPath:(id)a0 readOnly:(char)a1 payload:(id)a2;
- (id)initWithKeyPath:(id)a0 readOnly:(char)a1 stringListValue:(id)a2;
- (id)payloadCopy;

@end
