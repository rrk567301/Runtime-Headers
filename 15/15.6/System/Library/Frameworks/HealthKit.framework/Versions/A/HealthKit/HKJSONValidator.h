@class NSArray, NSMutableDictionary;
@protocol NSCopying;

@interface HKJSONValidator : NSObject {
    NSMutableDictionary *_subschemaCache;
}

@property (class, readonly, copy, nonatomic) NSArray *searchPaths;

@property (readonly, copy, nonatomic) id<NSCopying> schema;

+ (void)registerSearchPath:(id)a0;
+ (char)validateJSONObject:(id)a0 withSchemaNamed:(id)a1 bundle:(id)a2 error:(out id *)a3;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSchema:(id)a0;
- (char)_validateURL:(id)a0;
- (char)_validateArray:(id)a0 schema:(id)a1 keyStack:(id)a2;
- (id)_loadSubschemaNamed:(id)a0;
- (id)_mismatchErrorFromKeyStack:(id)a0;
- (char)_validateBoolean:(id)a0;
- (char)_validateDictionary:(id)a0 schema:(id)a1 keyStack:(id)a2;
- (char)_validateFingerprintSHA256:(id)a0;
- (char)_validateJSONObject:(id)a0 keyStack:(id)a1;
- (char)_validatePrimitive:(id)a0 schema:(id)a1 keyStack:(id)a2;
- (char)_validateTimezone:(id)a0;
- (char)_validateValue:(id)a0 schema:(id)a1 keyStack:(id)a2 root:(char)a3;
- (char)_validateValue:(id)a0 subschemaNamed:(id)a1 keyStack:(id)a2;
- (id)initWithSchema:(id)a0 subschemaCache:(id)a1;
- (id)initWithSchemaNamed:(id)a0 bundle:(id)a1;
- (char)validateJSONObject:(id)a0 error:(out id *)a1;

@end
