@class CCRepeatedUInt32, CCSerializedSetSharedItem, NSArray;

@interface CCSerializedSetItem : CCItemMessage

@property (readonly, nonatomic) CCSerializedSetSharedItem *sharedItem;
@property (readonly, nonatomic) CCRepeatedUInt32 *deviceIndexes;
@property (readonly, nonatomic) NSArray *localInstances;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (id)initWithSharedItem:(id)a0 deviceIndexes:(id)a1 localInstances:(id)a2 error:(id *)a3;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;

@end
