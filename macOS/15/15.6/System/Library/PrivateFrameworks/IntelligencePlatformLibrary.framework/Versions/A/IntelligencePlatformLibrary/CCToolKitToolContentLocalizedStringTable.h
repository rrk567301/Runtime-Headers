@class NSString, NSArray;

@interface CCToolKitToolContentLocalizedStringTable : CCItemMessage

@property (readonly, nonatomic) NSString *locale;
@property (readonly, nonatomic) NSArray *entries;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithLocale:(id)a0 entries:(id)a1 error:(id *)a2;

@end
