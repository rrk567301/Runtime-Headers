@class NSDictionary;

@interface NUAdjustmentSchema : NUSchema

@property (readonly, nonatomic) NSDictionary *settings;

+ (id)deserializeFromDictionary:(id)a0 error:(out id *)a1;

- (BOOL)serializeIntoDictionary:(id)a0 error:(out id *)a1;
- (void)enumerateProperties:(id /* block */)a0;
- (id)initWithIdentifier:(id)a0 attributes:(id)a1;
- (id)serialize:(id)a0 error:(out id *)a1;
- (BOOL)validate:(id)a0 error:(out id *)a1;
- (id)deserialize:(id)a0 error:(out id *)a1;
- (id)copyAdjustment:(id)a0;
- (BOOL)resolveItem:(id)a0 resolver:(id)a1 error:(out id *)a2;
- (BOOL)isValid:(out id *)a0;
- (id)modelForProperty:(id)a0;
- (id)schemaDependencies;
- (long long)type;
- (id)copy:(id)a0;
- (BOOL)validateAdjustment:(id)a0 error:(out id *)a1;
- (BOOL)validateSettings:(out id *)a0;
- (BOOL)serializeSettings:(id)a0 intoDictionary:(id)a1 error:(out id *)a2;
- (BOOL)deserializeSettings:(id)a0 fromDictionary:(id)a1 error:(out id *)a2;
- (BOOL)itemIsResolved:(id)a0;
- (BOOL)validateSettings:(id)a0 error:(out id *)a1;
- (id)serializeAdjustment:(id)a0 error:(out id *)a1;
- (id)deserializeAdjustment:(id)a0 error:(out id *)a1;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 settings:(id)a1;

@end
