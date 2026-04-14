@class NSString, NSArray;

@interface CCToolKitToolTypeDisplayRepresentation : CCItemMessage

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *numericFormat;
@property (readonly, nonatomic) NSArray *synonyms;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithName:(id)a0 numericFormat:(id)a1 synonyms:(id)a2 error:(id *)a3;

@end
