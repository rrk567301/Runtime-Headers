@class NSString, NUVersion;

@interface NUIdentifier : NSObject <NSCopying>

@property (readonly) NSString *namespace;
@property (readonly) NSString *name;
@property (readonly) NUVersion *version;
@property (readonly) NSString *stringRepresentation;

+ (id)defaultVersion;
+ (BOOL)validateNamespace:(id)a0;
+ (id)validNameSpaceRegularExpression;
+ (BOOL)validateIdentifierString:(id)a0 namespace:(out id *)a1 name:(out id *)a2 version:(out id *)a3;
+ (id)latestIdentifierWithNamespace:(id)a0 name:(id)a1;
+ (id)defaultNamespace;
+ (BOOL)validateName:(id)a0;
+ (id)latestIdentifierWithName:(id)a0;
+ (id)identifierWithString:(id)a0 error:(out id *)a1;
+ (id)validNameRegularExpression;
+ (BOOL)validateIdentifierString:(id)a0 error:(out id *)a1;
+ (id)identifierRegularExpression;

- (id)debugDescription;
- (BOOL)isEqualToIdentifier:(id)a0;
- (id)description;
- (id)init;
- (id)initWithName:(id)a0;
- (id)initWithNamespace:(id)a0 name:(id)a1 version:(id)a2;
- (id)initWithName:(id)a0 version:(id)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)identifierWithVersion:(id)a0;

@end
