@interface NUSourceSchema : NUSchema

+ (id)identifier;
+ (id)requiredAttributes;
+ (id)supportedAttributes;

- (id)init;
- (id)identifier;
- (long long)type;
- (id)copy:(id)a0;
- (BOOL)validate:(id)a0 error:(out id *)a1;
- (id)serialize:(id)a0 error:(out id *)a1;
- (id)deserialize:(id)a0 error:(out id *)a1;
- (id)deserializeAssetIdentifierFromDictionary:(id)a0 error:(out id *)a1;
- (id)deserializeSource:(id)a0 error:(out id *)a1;
- (id)schemaDependencies;
- (BOOL)serializeAssetIdentifier:(id)a0 intoDictionary:(id)a1 error:(out id *)a2;
- (BOOL)serializeIntoDictionary:(id)a0 error:(out id *)a1;
- (id)serializeSource:(id)a0 error:(out id *)a1;
- (BOOL)validateSource:(id)a0 error:(out id *)a1;

@end
