@interface CCToolKitToolRestrictionContextInInclusiveRange : CCItemMessage

@property (readonly, nonatomic) double lowerBound;
@property (nonatomic) BOOL hasLowerBound;
@property (readonly, nonatomic) double upperBound;
@property (nonatomic) BOOL hasUpperBound;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithLowerBound:(id)a0 upperBound:(id)a1 error:(id *)a2;

@end
