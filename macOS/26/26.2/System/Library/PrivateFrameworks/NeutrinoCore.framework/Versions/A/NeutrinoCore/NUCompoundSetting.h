@class NSDictionary;

@interface NUCompoundSetting : NUSetting

@property (readonly) NSDictionary *properties;

+ (id)deserializeFromDictionary:(id)a0 error:(out id *)a1;
+ (id)supportedAttributes;

- (BOOL)validateAttribute:(id)a0 value:(id)a1 error:(out id *)a2;
- (id)serialize:(id)a0 error:(out id *)a1;
- (id)modelForProperty:(id)a0;
- (BOOL)serializeIntoDictionary:(id)a0 error:(out id *)a1;
- (id)deserialize:(id)a0 error:(out id *)a1;
- (BOOL)isValid:(out id *)a0;
- (id)initWithAttributes:(id)a0;
- (BOOL)validate:(id)a0 error:(out id *)a1;
- (long long)type;
- (void).cxx_destruct;
- (id)description;
- (id)initWithProperties:(id)a0 attributes:(id)a1;
- (id)copy:(id)a0;
- (id)init;
- (void)enumerateProperties:(id /* block */)a0;

@end
