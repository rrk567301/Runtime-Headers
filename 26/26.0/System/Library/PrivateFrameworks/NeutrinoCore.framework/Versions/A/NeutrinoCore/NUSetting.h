@interface NUSetting : NUModel

@property (readonly) id defaultValue;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) BOOL isRequired;

+ (id)deserializeSettingsFromDictionary:(id)a0 key:(id)a1 error:(out id *)a2;
+ (id)supportedAttributes;
+ (BOOL)serializeSettings:(id)a0 intoDictionary:(id)a1 key:(id)a2 error:(out id *)a3;
+ (id)deserializeAttributesFromDictionary:(id)a0 error:(out id *)a1;
+ (id)deserializeFromDictionary:(id)a0 error:(out id *)a1;

- (id)serialize:(id)a0 error:(out id *)a1;
- (id)deserialize:(id)a0 error:(out id *)a1;
- (BOOL)validateAttribute:(id)a0 value:(id)a1 error:(out id *)a2;
- (id)copy:(id)a0;
- (id)description;
- (BOOL)serializeAttributesIntoDictionary:(id)a0 error:(out id *)a1;

@end
