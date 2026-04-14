@class NSString;

@interface CCSerializedSetDevice : CCItemMessage

@property (readonly, nonatomic) NSString *deviceIdentifier;
@property (readonly, nonatomic) unsigned int options;
@property (nonatomic) BOOL hasOptions;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (id)initWithDeviceIdentifier:(id)a0 options:(id)a1 error:(id *)a2;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;

@end
