@class NUIdentifier;

@interface NUSchema : NUModel

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NUIdentifier *identifier;

+ (id)copyIdentifiableItem:(id)a0;
+ (id)copyItem:(id)a0 schemaIdentifier:(id)a1;
+ (id)deserializeContentsFromDictionary:(id)a0 error:(out id *)a1;
+ (id)deserializeFromDictionary:(id)a0 error:(out id *)a1;
+ (id)deserializeIdentifiableItem:(id)a0 error:(out id *)a1;
+ (id)deserializeIdentifierFromDictionary:(id)a0 error:(out id *)a1;
+ (id)deserializeItem:(id)a0 schemaIdentifier:(id)a1 error:(out id *)a2;
+ (long long)deserializeMediaTypeFromDictionary:(id)a0;
+ (id)deserializeSchemaFromArray:(id)a0 error:(out id *)a1;
+ (id)reservedPropertyNames;
+ (long long)schemaTypeFromString:(id)a0 error:(out id *)a1;
+ (id)serializeIdentifiableItem:(id)a0 error:(out id *)a1;
+ (id)serializeItem:(id)a0 schemaIdentifier:(id)a1 error:(out id *)a2;
+ (char)serializeMediaType:(long long)a0 intoDictionary:(id)a1 error:(out id *)a2;
+ (char)validateIdentifiable:(id)a0 error:(out id *)a1;
+ (char)validateIdentifiable:(id)a0 type:(long long)a1 error:(out id *)a2;
+ (char)validateSchemaIdentifier:(id)a0 type:(long long)a1 error:(out id *)a2;
+ (char)validateSchemaType:(id)a0 error:(out id *)a1;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithAttributes:(id)a0;
- (char)isValid:(out id *)a0;
- (char)validateIdentifier:(id)a0 error:(out id *)a1;
- (char)itemIsResolved:(id)a0;
- (char)deserializeIdentifierFromDictionary:(id)a0 error:(out id *)a1;
- (id)initWithIdentifier:(id)a0 attributes:(id)a1;
- (char)isEqualToSchema:(id)a0;
- (char)resolveItem:(id)a0 resolver:(id)a1 error:(out id *)a2;
- (id)schemaDependencies;
- (char)serializeIdentifier:(id)a0 intoDictionary:(id)a1 error:(out id *)a2;
- (char)serializeIntoDictionary:(id)a0 error:(out id *)a1;

@end
