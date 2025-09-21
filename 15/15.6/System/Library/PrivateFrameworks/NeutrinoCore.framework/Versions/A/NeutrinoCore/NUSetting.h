@interface NUSetting : NUModel

@property (readonly) id defaultValue;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) char isRequired;

+ (id)deserializeAttributesFromDictionary:(id)a0 error:(out id *)a1;
+ (id)deserializeFromDictionary:(id)a0 error:(out id *)a1;
+ (id)deserializeSettingsFromDictionary:(id)a0 key:(id)a1 error:(out id *)a2;
+ (char)serializeSettings:(id)a0 intoDictionary:(id)a1 key:(id)a2 error:(out id *)a3;
+ (id)supportedAttributes;

- (id)description;
- (id)copy:(id)a0;
- (id)serialize:(id)a0 error:(out id *)a1;
- (id)deserialize:(id)a0 error:(out id *)a1;
- (char)serializeAttributesIntoDictionary:(id)a0 error:(out id *)a1;
- (char)validateAttribute:(id)a0 value:(id)a1 error:(out id *)a2;

@end
