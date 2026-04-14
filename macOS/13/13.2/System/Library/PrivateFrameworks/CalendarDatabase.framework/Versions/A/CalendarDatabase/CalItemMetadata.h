@class NSDictionary;

@interface CalItemMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *unrecognizedProperties;

+ (id)metadataWithData:(id)a0;
+ (BOOL)isRecognizedProperty:(id)a0 inComponent:(id)a1;
+ (BOOL)isRecognizedParameter:(id)a0 forProperty:(id)a1 inComponent:(id)a2;
+ (BOOL)shouldSkipSavingUnrecognizedParametersForProperty:(id)a0 inComponent:(id)a1;
+ (id)_whitelistedClassesForSecureCoding;
+ (id)metadataWithICSComponent:(id)a0;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithICSComponent:(id)a0;
- (id)propertyValueForComparison:(id)a0 propertyKey:(id)a1;
- (void)applyToComponent:(id)a0;
- (id)dataRepresentationWithExistingMetaData:(id)a0;

@end
