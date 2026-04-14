@class NSDictionary;

@interface NUAdjustmentSchema : NUSchema

@property (readonly, nonatomic) NSDictionary *settings;

+ (id)deserializeFromDictionary:(id)a0 error:(out id *)a1;

- (BOOL)itemIsResolved:(id)a0;
- (id)copyAdjustment:(id)a0;
- (id)serialize:(id)a0 error:(out id *)a1;
- (BOOL)validateSettings:(out id *)a0;
- (BOOL)validateAdjustment:(id)a0 error:(out id *)a1;
- (id)modelForProperty:(id)a0;
- (BOOL)serializeIntoDictionary:(id)a0 error:(out id *)a1;
- (id)initWithIdentifier:(id)a0 settings:(id)a1;
- (id)deserialize:(id)a0 error:(out id *)a1;
- (id)serializeAdjustment:(id)a0 error:(out id *)a1;
- (BOOL)isValid:(out id *)a0;
- (BOOL)validate:(id)a0 error:(out id *)a1;
- (id)initWithIdentifier:(id)a0 attributes:(id)a1;
- (id)deserializeAdjustment:(id)a0 error:(out id *)a1;
- (long long)type;
- (void).cxx_destruct;
- (BOOL)resolveItem:(id)a0 resolver:(id)a1 error:(out id *)a2;
- (BOOL)serializeSettings:(id)a0 intoDictionary:(id)a1 error:(out id *)a2;
- (id)copy:(id)a0;
- (id)schemaDependencies;
- (BOOL)deserializeSettings:(id)a0 fromDictionary:(id)a1 error:(out id *)a2;
- (BOOL)validateSettings:(id)a0 error:(out id *)a1;
- (void)enumerateProperties:(id /* block */)a0;

@end
