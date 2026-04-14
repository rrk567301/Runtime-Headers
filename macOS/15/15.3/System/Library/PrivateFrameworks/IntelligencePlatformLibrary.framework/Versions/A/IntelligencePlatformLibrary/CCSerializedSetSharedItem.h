@class NSData;

@interface CCSerializedSetSharedItem : CCItemMessage

@property (readonly, nonatomic) NSData *content;
@property (readonly, nonatomic) long long sharedIdentifier;
@property (nonatomic) BOOL hasSharedIdentifier;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (id)initWithContent:(id)a0 sharedIdentifier:(id)a1 error:(id *)a2;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;

@end
