@class NSDictionary, NUIdentifier;

@interface NUSourceSchema : NUSchema

@property (class, readonly, nonatomic) NUIdentifier *identifier;
@property (class, readonly, nonatomic) NUSourceSchema *sharedSourceSchema;

@property (readonly, nonatomic) NSDictionary *settings;

+ (id)requiredAttributes;
+ (id)supportedAttributes;
+ (id)deserializeFromDictionary:(id)a0 error:(out id *)a1;

- (id)schemaDependencies;
- (BOOL)validate:(id)a0 error:(out id *)a1;
- (id)initWithIdentifier:(id)a0 attributes:(id)a1;
- (id)serialize:(id)a0 error:(out id *)a1;
- (id)deserialize:(id)a0 error:(out id *)a1;
- (BOOL)serializeIntoDictionary:(id)a0 error:(out id *)a1;
- (id)copy:(id)a0;
- (id)initWithIdentifier:(id)a0 settings:(id)a1;
- (id)deserializeSource:(id)a0 error:(out id *)a1;
- (BOOL)resolveItem:(id)a0 resolver:(id)a1 error:(out id *)a2;
- (void).cxx_destruct;
- (long long)type;
- (id)deserializeAssetIdentifierFromDictionary:(id)a0 error:(out id *)a1;
- (id)serializeSource:(id)a0 error:(out id *)a1;
- (BOOL)validateSettings:(id)a0 error:(out id *)a1;
- (BOOL)validateAssetIdentifier:(id)a0 error:(out id *)a1;
- (BOOL)validateSource:(id)a0 error:(out id *)a1;
- (BOOL)serializeAssetIdentifier:(id)a0 intoDictionary:(id)a1 error:(out id *)a2;
- (BOOL)itemIsResolved:(id)a0;
- (BOOL)deserializeSettings:(id)a0 fromDictionary:(id)a1 error:(out id *)a2;
- (BOOL)serializeSettings:(id)a0 intoDictionary:(id)a1 error:(out id *)a2;

@end
