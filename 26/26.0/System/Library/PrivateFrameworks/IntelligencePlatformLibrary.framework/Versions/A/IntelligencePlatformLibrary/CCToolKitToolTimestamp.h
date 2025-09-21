@interface CCToolKitToolTimestamp : CCItemMessage

@property (readonly, nonatomic) long long seconds;
@property (nonatomic) BOOL hasSeconds;
@property (readonly, nonatomic) int nanos;
@property (nonatomic) BOOL hasNanos;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithSeconds:(id)a0 nanos:(id)a1 error:(id *)a2;

@end
