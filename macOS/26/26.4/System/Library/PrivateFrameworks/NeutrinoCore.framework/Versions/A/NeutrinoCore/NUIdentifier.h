@class NSString, NUVersion;

@interface NUIdentifier : NSObject <NSCopying>

@property (readonly) NSString *namespace;
@property (readonly) NSString *name;
@property (readonly) NUVersion *version;
@property (readonly) NSString *stringRepresentation;

+ (id)identifierRegularExpression;
+ (id)identifierWithString:(id)a0 error:(out id *)a1;
+ (id)validNameRegularExpression;
+ (id)latestIdentifierWithNamespace:(id)a0 name:(id)a1;
+ (BOOL)validateName:(id)a0;
+ (id)defaultNamespace;
+ (BOOL)validateIdentifierString:(id)a0 namespace:(out id *)a1 name:(out id *)a2 version:(out id *)a3;
+ (BOOL)validateIdentifierString:(id)a0 error:(out id *)a1;
+ (BOOL)validateNamespace:(id)a0;
+ (id)defaultVersion;
+ (id)validNameSpaceRegularExpression;
+ (id)latestIdentifierWithName:(id)a0;

- (id)debugDescription;
- (BOOL)isEqualToIdentifier:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithNamespace:(id)a0 name:(id)a1 version:(id)a2;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithName:(id)a0;
- (id)init;
- (id)description;
- (id)initWithName:(id)a0 version:(id)a1;
- (id)identifierWithVersion:(id)a0;

@end
