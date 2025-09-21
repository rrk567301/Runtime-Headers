@interface CalAlarmMetadata : CalItemMetadata

+ (char)supportsSecureCoding;
+ (id)metadataWithData:(id)a0;
+ (char)isRecognizedParameter:(id)a0 forProperty:(id)a1 inComponent:(id)a2;
+ (char)isRecognizedProperty:(id)a0 inComponent:(id)a1;
+ (char)shouldSkipSavingUnrecognizedParametersForProperty:(id)a0 inComponent:(id)a1;

- (id)initWithCoder:(id)a0;

@end
