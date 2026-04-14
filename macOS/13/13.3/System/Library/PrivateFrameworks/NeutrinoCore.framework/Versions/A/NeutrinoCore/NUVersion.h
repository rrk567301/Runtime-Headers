@class NSString;

@interface NUVersion : NSObject

@property (readonly) long long major;
@property (readonly) long long minor;
@property (readonly) NSString *stringRepresentation;

+ (id)regularExpression;
+ (BOOL)isValidVersionString:(id)a0 error:(out id *)a1;
+ (BOOL)isValidVersionString:(id)a0 error:(out id *)a1 major:(id *)a2 minor:(id *)a3;
+ (id)versionOne;
+ (id)versionWithString:(id)a0 error:(out id *)a1;
+ (id)versionZero;

- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (long long)compare:(id)a0;
- (id)initWithMajor:(long long)a0 minor:(long long)a1;
- (BOOL)isEqualToVersion:(id)a0;

@end
