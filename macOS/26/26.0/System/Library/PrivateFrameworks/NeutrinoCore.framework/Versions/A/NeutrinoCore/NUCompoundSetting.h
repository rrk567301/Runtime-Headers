@class NSDictionary;

@interface NUCompoundSetting : NUSetting

@property (readonly) NSDictionary *properties;

+ (id)supportedAttributes;
+ (id)deserializeFromDictionary:(id)a0 error:(out id *)a1;

- (BOOL)serializeIntoDictionary:(id)a0 error:(out id *)a1;
- (id)initWithAttributes:(id)a0;
- (void)enumerateProperties:(id /* block */)a0;
- (id)serialize:(id)a0 error:(out id *)a1;
- (BOOL)validate:(id)a0 error:(out id *)a1;
- (id)deserialize:(id)a0 error:(out id *)a1;
- (BOOL)isValid:(out id *)a0;
- (BOOL)validateAttribute:(id)a0 value:(id)a1 error:(out id *)a2;
- (id)initWithProperties:(id)a0 attributes:(id)a1;
- (id)modelForProperty:(id)a0;
- (long long)type;
- (id)copy:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
