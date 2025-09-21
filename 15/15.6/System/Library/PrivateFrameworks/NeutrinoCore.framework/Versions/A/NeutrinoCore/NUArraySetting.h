@class NUSetting;

@interface NUArraySetting : NUSetting

@property (readonly) NUSetting *content;

+ (id)deserializeFromDictionary:(id)a0 error:(out id *)a1;
+ (id)supportedAttributes;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (long long)type;
- (id)copy:(id)a0;
- (id)initWithAttributes:(id)a0;
- (char)validate:(id)a0 error:(out id *)a1;
- (char)isValid:(out id *)a0;
- (id)serialize:(id)a0 error:(out id *)a1;
- (id)copyArray:(id)a0;
- (id)deserialize:(id)a0 error:(out id *)a1;
- (id)initWithContent:(id)a0 attributes:(id)a1;
- (char)serializeIntoDictionary:(id)a0 error:(out id *)a1;
- (char)validateAttribute:(id)a0 value:(id)a1 error:(out id *)a2;

@end
