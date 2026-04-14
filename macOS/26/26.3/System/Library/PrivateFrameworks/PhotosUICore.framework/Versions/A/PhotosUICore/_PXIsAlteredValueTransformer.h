@class NSDictionary;

@interface _PXIsAlteredValueTransformer : NSValueTransformer {
    id _defaultValue;
    NSDictionary *_defaultSettingsArchiveDictionary;
}

+ (BOOL)allowsReverseTransformation;

- (id)transformedValue:(id)a0;
- (void).cxx_destruct;
- (id)initWithDefaultValue:(id)a0;

@end
