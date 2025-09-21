@class NSDictionary, NSSet;

@interface NUCompositionSchema : NUSchema {
    NSSet *_requiredContents;
}

@property (readonly, nonatomic) NSDictionary *contents;
@property (readonly, nonatomic) NSSet *requiredContents;

+ (id)deserializeFromDictionary:(id)a0 error:(out id *)a1;
+ (id)supportedAttributes;

- (void).cxx_destruct;
- (long long)type;
- (id)copy:(id)a0;
- (char)validate:(id)a0 error:(out id *)a1;
- (char)isValid:(out id *)a0;
- (id)serialize:(id)a0 error:(out id *)a1;
- (char)validateComposition:(id)a0 error:(out id *)a1;
- (char)itemIsResolved:(id)a0;
- (id)copyComposition:(id)a0;
- (id)deserialize:(id)a0 error:(out id *)a1;
- (id)deserializeComposition:(id)a0 error:(out id *)a1;
- (char)deserializeContents:(id)a0 fromDictionary:(id)a1 error:(out id *)a2;
- (id)initWithIdentifier:(id)a0 attributes:(id)a1;
- (id)initWithIdentifier:(id)a0 contents:(id)a1 attributes:(id)a2;
- (id)modelForProperty:(id)a0;
- (char)resolveItem:(id)a0 resolver:(id)a1 error:(out id *)a2;
- (id)schemaDependencies;
- (id)serializeComposition:(id)a0 error:(out id *)a1;
- (char)serializeContents:(id)a0 intoDictionary:(id)a1 error:(out id *)a2;
- (char)serializeIntoDictionary:(id)a0 error:(out id *)a1;
- (char)validateAttribute:(id)a0 value:(id)a1 error:(out id *)a2;
- (char)validateContents:(out id *)a0;
- (char)validateContents:(id)a0 error:(out id *)a1;
- (char)validatePropertyArray:(id)a0 error:(out id *)a1;

@end
