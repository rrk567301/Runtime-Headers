@class NSData;

@interface CCSerializedSetItemInstance : CCItemMessage

@property (readonly, nonatomic) NSData *metaContent;
@property (readonly, nonatomic) long long instanceIdentifier;
@property (nonatomic) BOOL hasInstanceIdentifier;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (id)initWithMetaContent:(id)a0 instanceIdentifier:(id)a1 error:(id *)a2;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;

@end
