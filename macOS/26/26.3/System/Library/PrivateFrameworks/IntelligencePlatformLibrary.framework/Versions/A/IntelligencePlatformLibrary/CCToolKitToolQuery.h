@class CCToolKitToolQueryAnyPredicate;

@interface CCToolKitToolQuery : CCItemMessage

@property (readonly, nonatomic) CCToolKitToolQueryAnyPredicate *predicate;
@property (readonly, nonatomic) unsigned int sort;
@property (readonly, nonatomic) long long limit;
@property (nonatomic) BOOL hasLimit;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithPredicate:(id)a0 sort:(unsigned int)a1 limit:(id)a2 error:(id *)a3;

@end
