@class NSString, NUVersion;

@interface NUIdentifier : NSObject <NSCopying>

@property (readonly) NSString *namespace;
@property (readonly) NSString *name;
@property (readonly) NUVersion *version;
@property (readonly) NSString *stringRepresentation;

+ (BOOL)validateIdentifierString:(id)a0 error:(out id *)a1;
+ (id)validNameRegularExpression;
+ (id)defaultVersion;
+ (BOOL)validateName:(id)a0;
+ (id)latestIdentifierWithNamespace:(id)a0 name:(id)a1;
+ (id)defaultNamespace;
+ (id)latestIdentifierWithName:(id)a0;
+ (BOOL)validateNamespace:(id)a0;
+ (id)identifierWithString:(id)a0 error:(out id *)a1;
+ (id)identifierRegularExpression;
+ (BOOL)validateIdentifierString:(id)a0 namespace:(out id *)a1 name:(out id *)a2 version:(out id *)a3;
+ (id)validNameSpaceRegularExpression;

- (BOOL)isEqualToIdentifier:(id)a0;
- (id)initWithName:(id)a0 version:(id)a1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)identifierWithVersion:(id)a0;
- (id)description;
- (id)initWithName:(id)a0;
- (id)init;
- (id)initWithNamespace:(id)a0 name:(id)a1 version:(id)a2;

@end
