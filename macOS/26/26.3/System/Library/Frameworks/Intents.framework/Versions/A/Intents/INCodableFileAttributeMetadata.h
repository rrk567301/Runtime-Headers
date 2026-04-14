@class NSString, NSArray;

@interface INCodableFileAttributeMetadata : INCodableAttributeMetadata

@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSArray *customUTIs;
@property (readonly, nonatomic) NSArray *UTIs;

+ (id)makeFromWidgetPlistableRepresentation:(id)a0 error:(id *)a1;
+ (BOOL)supportsSecureCoding;

- (void)updateWithDictionary:(id)a0;
- (id)__INTypeCodableDescriptionTypeKey;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (id)widgetPlistableRepresentationWithParameters:(id)a0 error:(id *)a1;
- (id)__INIntentResponseCodableDescriptionTypeKey;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)__INCodableDescriptionTypeKey;
- (void)encodeWithCoder:(id)a0;
- (id)__INCodableDescriptionCustomUTIsKey;
- (id)__INIntentResponseCodableDescriptionCustomUTIsKey;
- (id)__INTypeCodableDescriptionCustomUTIsKey;

@end
