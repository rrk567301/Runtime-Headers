@class NUSetting;

@interface NUArraySetting : NUSetting

@property (readonly) NUSetting *content;

+ (id)supportedAttributes;
+ (id)deserializeFromDictionary:(id)a0 error:(out id *)a1;

- (id)initWithAttributes:(id)a0;
- (BOOL)validate:(id)a0 error:(out id *)a1;
- (id)serialize:(id)a0 error:(out id *)a1;
- (BOOL)validateAttribute:(id)a0 value:(id)a1 error:(out id *)a2;
- (id)deserialize:(id)a0 error:(out id *)a1;
- (id)copyArray:(id)a0;
- (BOOL)serializeIntoDictionary:(id)a0 error:(out id *)a1;
- (id)copy:(id)a0;
- (BOOL)isValid:(out id *)a0;
- (void).cxx_destruct;
- (long long)type;
- (id)init;
- (id)initWithContent:(id)a0 attributes:(id)a1;
- (id)description;

@end
