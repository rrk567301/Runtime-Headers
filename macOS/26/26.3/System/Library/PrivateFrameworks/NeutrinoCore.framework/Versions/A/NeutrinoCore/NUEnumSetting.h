@class NSArray, NSString;

@interface NUEnumSetting : NUSetting

@property (readonly) NSArray *values;
@property (readonly) NSString *defaultValue;
@property (readonly) NSString *identityValue;

+ (id)deserializeFromDictionary:(id)a0 error:(out id *)a1;

- (long long)type;
- (BOOL)validate:(id)a0 error:(out id *)a1;
- (id)description;
- (BOOL)serializeIntoDictionary:(id)a0 error:(out id *)a1;
- (id)init;
- (BOOL)isValid:(out id *)a0;
- (id)initWithAttributes:(id)a0;
- (void).cxx_destruct;
- (id)initWithValues:(id)a0 attributes:(id)a1;
- (BOOL)validateValues:(out id *)a0;

@end
