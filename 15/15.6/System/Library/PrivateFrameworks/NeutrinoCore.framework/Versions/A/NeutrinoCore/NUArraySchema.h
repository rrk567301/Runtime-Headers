@class NSDictionary, NSArray, NUPattern;

@interface NUArraySchema : NUSchema {
    NSDictionary *_identifierToAlias;
}

@property (readonly, nonatomic) long long contentType;
@property (readonly, nonatomic) NUPattern *pattern;
@property (readonly, nonatomic) NSDictionary *contents;
@property (readonly, nonatomic) NSArray *defaultArray;

+ (long long)deserializeContentTypeFromDictionary:(id)a0 error:(out id *)a1;
+ (id)deserializeFromDictionary:(id)a0 error:(out id *)a1;
+ (id)deserializePatternFromDictionary:(id)a0 error:(out id *)a1;
+ (id)supportedAttributes;

- (void).cxx_destruct;
- (long long)type;
- (id)copy:(id)a0;
- (char)validate:(id)a0 error:(out id *)a1;
- (char)isValid:(out id *)a0;
- (id)serialize:(id)a0 error:(out id *)a1;
- (char)itemIsResolved:(id)a0;
- (id)copyArray:(id)a0;
- (id)deserialize:(id)a0 error:(out id *)a1;
- (id)deserializeArray:(id)a0 error:(out id *)a1;
- (id)initWithIdentifier:(id)a0 attributes:(id)a1;
- (id)initWithIdentifier:(id)a0 contentType:(long long)a1 contents:(id)a2 pattern:(id)a3 attributes:(id)a4;
- (char)resolveItem:(id)a0 resolver:(id)a1 error:(out id *)a2;
- (id)schemaDependencies;
- (id)serializeArray:(id)a0 error:(out id *)a1;
- (char)serializeIntoDictionary:(id)a0 error:(out id *)a1;
- (char)validateArray:(id)a0 error:(out id *)a1;
- (char)validateArrayContents:(id)a0 error:(out id *)a1;
- (char)validateArrayOrder:(id)a0 error:(out id *)a1;
- (char)validateAttribute:(id)a0 value:(id)a1 error:(out id *)a2;
- (char)validateAttributes:(out id *)a0;
- (char)validateContents:(out id *)a0;
- (char)validateDefaultArray:(id)a0 error:(out id *)a1;

@end
