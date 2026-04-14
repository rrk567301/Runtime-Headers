@class NSString;

@interface NUVersion : NSObject

@property (readonly) long long major;
@property (readonly) long long minor;
@property (readonly) NSString *stringRepresentation;

+ (id)regularExpression;
+ (id)versionZero;
+ (id)versionWithString:(id)a0 error:(out id *)a1;
+ (BOOL)isValidVersionString:(id)a0 error:(out id *)a1;
+ (BOOL)isValidVersionString:(id)a0 error:(out id *)a1 major:(id *)a2 minor:(id *)a3;
+ (id)versionOne;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)debugDescription;
- (id)init;
- (long long)compare:(id)a0;
- (BOOL)isEqualToVersion:(id)a0;
- (id)initWithMajor:(long long)a0 minor:(long long)a1;

@end
