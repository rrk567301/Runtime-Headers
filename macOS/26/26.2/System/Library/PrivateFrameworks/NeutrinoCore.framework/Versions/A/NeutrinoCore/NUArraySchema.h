@class NSDictionary, NSArray, NUPattern;

@interface NUArraySchema : NUSchema {
    NSDictionary *_identifierToAlias;
}

@property (readonly, nonatomic) long long contentType;
@property (readonly, nonatomic) NUPattern *pattern;
@property (readonly, nonatomic) NSDictionary *contents;
@property (readonly, nonatomic) NSArray *defaultArray;

+ (id)deserializeFromDictionary:(id)a0 error:(out id *)a1;
+ (long long)deserializeContentTypeFromDictionary:(id)a0 error:(out id *)a1;
+ (id)supportedAttributes;
+ (id)deserializePatternFromDictionary:(id)a0 error:(out id *)a1;

- (BOOL)validateAttribute:(id)a0 value:(id)a1 error:(out id *)a2;
- (BOOL)itemIsResolved:(id)a0;
- (id)serialize:(id)a0 error:(out id *)a1;
- (BOOL)validateContents:(out id *)a0;
- (BOOL)serializeIntoDictionary:(id)a0 error:(out id *)a1;
- (id)deserialize:(id)a0 error:(out id *)a1;
- (BOOL)isValid:(out id *)a0;
- (BOOL)validate:(id)a0 error:(out id *)a1;
- (id)initWithIdentifier:(id)a0 attributes:(id)a1;
- (long long)type;
- (void).cxx_destruct;
- (BOOL)resolveItem:(id)a0 resolver:(id)a1 error:(out id *)a2;
- (id)copy:(id)a0;
- (id)schemaDependencies;
- (id)copyArray:(id)a0;
- (id)deserializeArray:(id)a0 error:(out id *)a1;
- (id)initWithIdentifier:(id)a0 contentType:(long long)a1 contents:(id)a2 pattern:(id)a3 attributes:(id)a4;
- (id)serializeArray:(id)a0 error:(out id *)a1;
- (BOOL)validateArray:(id)a0 error:(out id *)a1;
- (BOOL)validateArrayContents:(id)a0 error:(out id *)a1;
- (BOOL)validateArrayOrder:(id)a0 error:(out id *)a1;
- (BOOL)validateAttributes:(out id *)a0;
- (BOOL)validateDefaultArray:(id)a0 error:(out id *)a1;

@end
