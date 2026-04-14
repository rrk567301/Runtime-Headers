@interface NUOpaqueSetting : NUSetting

+ (id)deserializeFromDictionary:(id)a0 error:(out id *)a1;
+ (id)supportedAttributes;

- (BOOL)validateAttribute:(id)a0 value:(id)a1 error:(out id *)a2;
- (id)serialize:(id)a0 error:(out id *)a1;
- (BOOL)serializeIntoDictionary:(id)a0 error:(out id *)a1;
- (id)deserialize:(id)a0 error:(out id *)a1;
- (BOOL)isValid:(out id *)a0;
- (BOOL)validate:(id)a0 error:(out id *)a1;
- (BOOL)validatePlistCompatibility:(id)a0 error:(out id *)a1;
- (long long)type;

@end
