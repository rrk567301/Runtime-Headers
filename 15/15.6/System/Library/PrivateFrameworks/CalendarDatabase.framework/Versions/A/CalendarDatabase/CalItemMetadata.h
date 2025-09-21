@class NSDictionary;

@interface CalItemMetadata : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *unrecognizedProperties;

+ (id)metadataWithData:(id)a0;
+ (id)_whitelistedClassesForSecureCoding;
+ (char)isRecognizedParameter:(id)a0 forProperty:(id)a1 inComponent:(id)a2;
+ (char)isRecognizedProperty:(id)a0 inComponent:(id)a1;
+ (id)metadataWithICSComponent:(id)a0;
+ (char)shouldSkipSavingUnrecognizedParametersForProperty:(id)a0 inComponent:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)applyToComponent:(id)a0;
- (id)dataRepresentationWithExistingMetaData:(id)a0;
- (id)initWithICSComponent:(id)a0;
- (id)propertyValueForComparison:(id)a0 propertyKey:(id)a1;

@end
