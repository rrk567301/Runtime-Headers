@class NSDictionary, NUIdentifier;

@interface NUSourceSchema : NUSchema

@property (class, readonly, nonatomic) NUIdentifier *identifier;
@property (class, readonly, nonatomic) NUSourceSchema *sharedSourceSchema;

@property (readonly, nonatomic) NSDictionary *settings;

+ (id)deserializeFromDictionary:(id)a0 error:(out id *)a1;
+ (id)supportedAttributes;
+ (id)requiredAttributes;

- (BOOL)validateAssetIdentifier:(id)a0 error:(out id *)a1;
- (id)deserializeSource:(id)a0 error:(out id *)a1;
- (BOOL)itemIsResolved:(id)a0;
- (id)serialize:(id)a0 error:(out id *)a1;
- (id)serializeSource:(id)a0 error:(out id *)a1;
- (id)deserializeAssetIdentifierFromDictionary:(id)a0 error:(out id *)a1;
- (BOOL)serializeIntoDictionary:(id)a0 error:(out id *)a1;
- (id)initWithIdentifier:(id)a0 settings:(id)a1;
- (id)deserialize:(id)a0 error:(out id *)a1;
- (BOOL)validate:(id)a0 error:(out id *)a1;
- (id)initWithIdentifier:(id)a0 attributes:(id)a1;
- (BOOL)serializeAssetIdentifier:(id)a0 intoDictionary:(id)a1 error:(out id *)a2;
- (long long)type;
- (void).cxx_destruct;
- (BOOL)resolveItem:(id)a0 resolver:(id)a1 error:(out id *)a2;
- (BOOL)serializeSettings:(id)a0 intoDictionary:(id)a1 error:(out id *)a2;
- (id)copy:(id)a0;
- (id)schemaDependencies;
- (BOOL)deserializeSettings:(id)a0 fromDictionary:(id)a1 error:(out id *)a2;
- (BOOL)validateSettings:(id)a0 error:(out id *)a1;
- (BOOL)validateSource:(id)a0 error:(out id *)a1;

@end
