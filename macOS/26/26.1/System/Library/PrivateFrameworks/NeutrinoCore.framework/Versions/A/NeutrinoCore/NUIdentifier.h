@class NSString, NUVersion;

@interface NUIdentifier : NSObject <NSCopying>

@property (readonly) NSString *namespace;
@property (readonly) NSString *name;
@property (readonly) NUVersion *version;
@property (readonly) NSString *stringRepresentation;

+ (BOOL)validateNamespace:(id)a0;
+ (id)validNameRegularExpression;
+ (BOOL)validateIdentifierString:(id)a0 error:(out id *)a1;
+ (id)latestIdentifierWithNamespace:(id)a0 name:(id)a1;
+ (id)validNameSpaceRegularExpression;
+ (id)identifierWithString:(id)a0 error:(out id *)a1;
+ (id)defaultVersion;
+ (id)identifierRegularExpression;
+ (BOOL)validateName:(id)a0;
+ (id)latestIdentifierWithName:(id)a0;
+ (id)defaultNamespace;
+ (BOOL)validateIdentifierString:(id)a0 namespace:(out id *)a1 name:(out id *)a2 version:(out id *)a3;

- (id)identifierWithVersion:(id)a0;
- (unsigned long long)hash;
- (id)initWithName:(id)a0 version:(id)a1;
- (id)description;
- (BOOL)isEqualToIdentifier:(id)a0;
- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (id)initWithNamespace:(id)a0 name:(id)a1 version:(id)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)init;

@end
