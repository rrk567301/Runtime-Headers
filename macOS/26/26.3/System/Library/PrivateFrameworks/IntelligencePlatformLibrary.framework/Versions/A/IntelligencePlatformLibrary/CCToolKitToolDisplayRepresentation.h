@class NSString, CCToolKitToolDisplayRepresentationAltText, CCToolKitToolDisplayRepresentationImage, NSArray, CCToolKitToolDisplayRepresentationSubtitle, CCToolKitToolPluginModelData;

@interface CCToolKitToolDisplayRepresentation : CCItemMessage

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) CCToolKitToolDisplayRepresentationSubtitle *subtitle;
@property (readonly, nonatomic) CCToolKitToolDisplayRepresentationAltText *altText;
@property (readonly, nonatomic) CCToolKitToolDisplayRepresentationImage *image;
@property (readonly, nonatomic) NSArray *synonyms;
@property (readonly, nonatomic) CCToolKitToolPluginModelData *snippetPluginModel;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 altText:(id)a2 image:(id)a3 synonyms:(id)a4 snippetPluginModel:(id)a5 error:(id *)a6;

@end
