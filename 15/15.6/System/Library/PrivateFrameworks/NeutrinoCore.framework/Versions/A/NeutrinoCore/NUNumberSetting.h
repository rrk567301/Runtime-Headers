@class NSNumber;

@interface NUNumberSetting : NUSetting

@property (readonly) NSNumber *minimumValue;
@property (readonly) NSNumber *maximumValue;
@property (readonly) NSNumber *ui_minimumValue;
@property (readonly) NSNumber *ui_maximumValue;
@property (readonly) NSNumber *defaultValue;
@property (readonly) NSNumber *identityValue;

+ (id)deserializeFromDictionary:(id)a0 error:(out id *)a1;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (long long)type;
- (id)initWithAttributes:(id)a0;
- (char)validate:(id)a0 error:(out id *)a1;
- (char)isValid:(out id *)a0;
- (id)initWithMinimum:(id)a0 maximum:(id)a1 attributes:(id)a2;
- (id)initWithMinimum:(id)a0 maximum:(id)a1 uiMinimum:(id)a2 uiMaximum:(id)a3 attributes:(id)a4;
- (char)serializeIntoDictionary:(id)a0 error:(out id *)a1;
- (char)validateNumber:(id)a0 error:(out id *)a1;

@end
