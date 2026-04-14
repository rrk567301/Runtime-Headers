@class NSString, NUVersion;

@interface NUIdentifier : NSObject <NSCopying>

@property (readonly) NSString *namespace;
@property (readonly) NSString *name;
@property (readonly) NUVersion *version;
@property (readonly) NSString *stringRepresentation;

+ (BOOL)validateNamespace:(id)a0;
+ (id)validNameRegularExpression;
+ (BOOL)validateIdentifierString:(id)a0 namespace:(out id *)a1 name:(out id *)a2 version:(out id *)a3;
+ (BOOL)validateIdentifierString:(id)a0 error:(out id *)a1;
+ (id)defaultVersion;
+ (id)defaultNamespace;
+ (id)latestIdentifierWithName:(id)a0;
+ (BOOL)validateName:(id)a0;
+ (id)identifierRegularExpression;
+ (id)identifierWithString:(id)a0 error:(out id *)a1;
+ (id)validNameSpaceRegularExpression;
+ (id)latestIdentifierWithNamespace:(id)a0 name:(id)a1;

- (id)debugDescription;
- (id)initWithNamespace:(id)a0 name:(id)a1 version:(id)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToIdentifier:(id)a0;
- (id)init;
- (id)initWithName:(id)a0 version:(id)a1;
- (id)description;
- (id)identifierWithVersion:(id)a0;
- (id)initWithName:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
