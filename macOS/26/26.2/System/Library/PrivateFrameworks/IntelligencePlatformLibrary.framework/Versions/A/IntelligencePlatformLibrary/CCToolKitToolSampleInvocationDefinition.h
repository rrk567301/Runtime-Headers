@class NSArray, NSString;

@interface CCToolKitToolSampleInvocationDefinition : CCItemMessage

@property (readonly, nonatomic) NSArray *phrases;
@property (readonly, nonatomic) NSString *expectedResult;
@property (readonly, nonatomic) NSArray *negativePhrases;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithPhrases:(id)a0 expectedResult:(id)a1 negativePhrases:(id)a2 error:(id *)a3;

@end
