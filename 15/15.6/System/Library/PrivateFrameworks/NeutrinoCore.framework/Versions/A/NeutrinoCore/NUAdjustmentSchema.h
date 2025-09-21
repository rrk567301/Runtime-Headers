@class NSDictionary;

@interface NUAdjustmentSchema : NUSchema

@property (readonly, nonatomic) NSDictionary *settings;

+ (id)deserializeFromDictionary:(id)a0 error:(out id *)a1;

- (void).cxx_destruct;
- (long long)type;
- (id)copy:(id)a0;
- (char)validate:(id)a0 error:(out id *)a1;
- (char)isValid:(out id *)a0;
- (id)serialize:(id)a0 error:(out id *)a1;
- (char)itemIsResolved:(id)a0;
- (id)copyAdjustment:(id)a0;
- (id)deserialize:(id)a0 error:(out id *)a1;
- (id)deserializeAdjustment:(id)a0 error:(out id *)a1;
- (char)deserializeSettings:(id)a0 fromDictionary:(id)a1 error:(out id *)a2;
- (void)enumerateProperties:(id /* block */)a0;
- (id)initWithIdentifier:(id)a0 attributes:(id)a1;
- (id)initWithIdentifier:(id)a0 settings:(id)a1;
- (id)modelForProperty:(id)a0;
- (char)resolveItem:(id)a0 resolver:(id)a1 error:(out id *)a2;
- (id)schemaDependencies;
- (id)serializeAdjustment:(id)a0 error:(out id *)a1;
- (char)serializeIntoDictionary:(id)a0 error:(out id *)a1;
- (char)serializeSettings:(id)a0 intoDictionary:(id)a1 error:(out id *)a2;
- (char)validateAdjustment:(id)a0 error:(out id *)a1;
- (char)validateSettings:(out id *)a0;
- (char)validateSettings:(id)a0 error:(out id *)a1;

@end
