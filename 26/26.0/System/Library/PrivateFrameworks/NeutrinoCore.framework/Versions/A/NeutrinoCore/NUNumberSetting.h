@class NSNumber;

@interface NUNumberSetting : NUSetting

@property (readonly) NSNumber *minimumValue;
@property (readonly) NSNumber *maximumValue;
@property (readonly) NSNumber *ui_minimumValue;
@property (readonly) NSNumber *ui_maximumValue;
@property (readonly) NSNumber *defaultValue;
@property (readonly) NSNumber *identityValue;

+ (id)deserializeFromDictionary:(id)a0 error:(out id *)a1;

- (BOOL)serializeIntoDictionary:(id)a0 error:(out id *)a1;
- (id)initWithAttributes:(id)a0;
- (BOOL)validate:(id)a0 error:(out id *)a1;
- (BOOL)isValid:(out id *)a0;
- (long long)type;
- (id)init;
- (id)description;
- (id)initWithMinimum:(id)a0 maximum:(id)a1 attributes:(id)a2;
- (id)initWithMinimum:(id)a0 maximum:(id)a1 uiMinimum:(id)a2 uiMaximum:(id)a3 attributes:(id)a4;
- (BOOL)validateNumber:(id)a0 error:(out id *)a1;
- (void).cxx_destruct;

@end
