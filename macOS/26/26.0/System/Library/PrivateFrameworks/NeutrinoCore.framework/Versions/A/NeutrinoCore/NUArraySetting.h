@class NUSetting;

@interface NUArraySetting : NUSetting

@property (readonly) NUSetting *content;

+ (id)supportedAttributes;
+ (id)deserializeFromDictionary:(id)a0 error:(out id *)a1;

- (BOOL)serializeIntoDictionary:(id)a0 error:(out id *)a1;
- (id)initWithAttributes:(id)a0;
- (id)serialize:(id)a0 error:(out id *)a1;
- (BOOL)validate:(id)a0 error:(out id *)a1;
- (id)deserialize:(id)a0 error:(out id *)a1;
- (id)copyArray:(id)a0;
- (BOOL)isValid:(out id *)a0;
- (BOOL)validateAttribute:(id)a0 value:(id)a1 error:(out id *)a2;
- (long long)type;
- (id)copy:(id)a0;
- (id)init;
- (id)description;
- (id)initWithContent:(id)a0 attributes:(id)a1;
- (void).cxx_destruct;

@end
