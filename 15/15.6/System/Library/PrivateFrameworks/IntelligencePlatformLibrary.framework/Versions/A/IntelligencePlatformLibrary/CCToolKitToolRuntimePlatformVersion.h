@interface CCToolKitToolRuntimePlatformVersion : CCItemMessage

@property (readonly, nonatomic) int major;
@property (nonatomic) char hasMajor;
@property (readonly, nonatomic) int minor;
@property (nonatomic) char hasMinor;
@property (readonly, nonatomic) int patch;
@property (nonatomic) char hasPatch;
@property (readonly, nonatomic) char isWildcard;
@property (nonatomic) char hasIsWildcard;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (char)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithMajor:(id)a0 minor:(id)a1 patch:(id)a2 isWildcard:(id)a3 error:(id *)a4;

@end
