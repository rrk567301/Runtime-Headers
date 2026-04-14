@class NSDictionary;

@interface NUCompoundSetting : NUSetting

@property (readonly) NSDictionary *properties;

+ (id)deserializeFromDictionary:(id)a0 error:(out id *)a1;
+ (id)supportedAttributes;

- (id)modelForProperty:(id)a0;
- (long long)type;
- (id)deserialize:(id)a0 error:(out id *)a1;
- (BOOL)validate:(id)a0 error:(out id *)a1;
- (id)serialize:(id)a0 error:(out id *)a1;
- (id)description;
- (BOOL)serializeIntoDictionary:(id)a0 error:(out id *)a1;
- (id)init;
- (BOOL)isValid:(out id *)a0;
- (id)copy:(id)a0;
- (BOOL)validateAttribute:(id)a0 value:(id)a1 error:(out id *)a2;
- (id)initWithAttributes:(id)a0;
- (void)enumerateProperties:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithProperties:(id)a0 attributes:(id)a1;

@end
