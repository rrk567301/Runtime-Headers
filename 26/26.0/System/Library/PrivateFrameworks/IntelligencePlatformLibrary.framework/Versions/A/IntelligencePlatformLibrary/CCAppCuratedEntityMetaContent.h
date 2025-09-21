@class NSString;

@interface CCAppCuratedEntityMetaContent : CCItemMessage <CCItemMetaContent, CCItemFieldEnumerable, CCJSONDescribing>

@property (readonly, nonatomic) float relevancyScore;
@property (nonatomic) BOOL hasRelevancyScore;
@property (readonly, nonatomic) NSString *sourceItemIdentifier;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithSourceItemIdentifier:(id)a0 relevancyScore:(id)a1 error:(id *)a2;

@end
