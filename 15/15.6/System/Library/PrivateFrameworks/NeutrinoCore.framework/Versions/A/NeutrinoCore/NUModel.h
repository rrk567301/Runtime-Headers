@class NSDictionary;

@interface NUModel : NSObject

@property (readonly, nonatomic) NSDictionary *attributes;

+ (char)validateName:(id)a0 error:(out id *)a1;
+ (id)requiredAttributes;
+ (char)validateIdentifier:(id)a0 error:(out id *)a1;
+ (id)_deserializeObjectOfClass:(Class)a0 fromDictionary:(id)a1 key:(id)a2 error:(out id *)a3;
+ (id)deserializeArrayFromDictionary:(id)a0 key:(id)a1 error:(out id *)a2;
+ (id)deserializeAttribute:(id)a0 value:(id)a1 error:(out id *)a2;
+ (id)deserializeDictionaryFromDictionary:(id)a0 key:(id)a1 error:(out id *)a2;
+ (id)deserializeFromDictionary:(id)a0 error:(out id *)a1;
+ (id)deserializeStringFromDictionary:(id)a0 key:(id)a1 error:(out id *)a2;
+ (id)reservedPropertyNames;
+ (id)supportedAttributes;
+ (char)validateArray:(id)a0 error:(out id *)a1;
+ (char)validateBool:(id)a0 error:(out id *)a1;
+ (char)validateNumber:(id)a0 error:(out id *)a1;
+ (char)validatePattern:(id)a0 error:(out id *)a1;
+ (char)validatePropertyName:(id)a0 error:(out id *)a1;
+ (char)validateString:(id)a0 error:(out id *)a1;
+ (char)validateStringArray:(id)a0 error:(out id *)a1;

- (id)init;
- (void).cxx_destruct;
- (id)copy:(id)a0;
- (id)initWithAttributes:(id)a0;
- (char)validate:(id)a0 error:(out id *)a1;
- (char)isValid:(out id *)a0;
- (id)serialize:(id)a0 error:(out id *)a1;
- (id)deserialize:(id)a0 error:(out id *)a1;
- (void)enumerateProperties:(id /* block */)a0;
- (id)modelForProperty:(id)a0;
- (id)serializeAsDictionary:(out id *)a0;
- (char)serializeAttribute:(id)a0 value:(id)a1 intoDictionary:(id)a2 error:(out id *)a3;
- (char)serializeIntoDictionary:(id)a0 error:(out id *)a1;
- (char)validateAttribute:(id)a0 value:(id)a1 error:(out id *)a2;
- (char)validateAttributes:(out id *)a0;

@end
