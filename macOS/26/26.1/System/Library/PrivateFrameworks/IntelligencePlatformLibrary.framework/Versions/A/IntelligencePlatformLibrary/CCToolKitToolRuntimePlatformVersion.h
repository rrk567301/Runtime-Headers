@interface CCToolKitToolRuntimePlatformVersion : CCItemMessage

@property (readonly, nonatomic) int major;
@property (nonatomic) BOOL hasMajor;
@property (readonly, nonatomic) int minor;
@property (nonatomic) BOOL hasMinor;
@property (readonly, nonatomic) int patch;
@property (nonatomic) BOOL hasPatch;
@property (readonly, nonatomic) BOOL isWildcard;
@property (nonatomic) BOOL hasIsWildcard;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithMajor:(id)a0 minor:(id)a1 patch:(id)a2 isWildcard:(id)a3 error:(id *)a4;

@end
