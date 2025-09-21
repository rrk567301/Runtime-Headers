@class NSNumber;

@interface NUBoolSetting : NUSetting

@property (readonly) NSNumber *defaultValue;
@property (readonly) NSNumber *identityValue;

+ (id)deserializeFromDictionary:(id)a0 error:(out id *)a1;

- (long long)type;
- (char)validate:(id)a0 error:(out id *)a1;
- (char)isValid:(out id *)a0;
- (char)serializeIntoDictionary:(id)a0 error:(out id *)a1;

@end
