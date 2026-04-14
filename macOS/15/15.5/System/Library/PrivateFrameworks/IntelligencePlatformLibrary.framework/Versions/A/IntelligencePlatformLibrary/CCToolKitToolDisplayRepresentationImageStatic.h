@class NSData, CCToolKitToolDisplayRepresentationImageStaticSymbol, NSString;

@interface CCToolKitToolDisplayRepresentationImageStatic : CCItemMessage

@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) CCToolKitToolDisplayRepresentationImageStaticSymbol *symbol;
@property (readonly, nonatomic) NSString *file;
@property (readonly, nonatomic) unsigned int kindType;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithKind:(id)a0 kindType:(unsigned int)a1 error:(id *)a2;

@end
