@class NSString;

@interface NUVersion : NSObject

@property (readonly) long long major;
@property (readonly) long long minor;
@property (readonly) NSString *stringRepresentation;

+ (id)versionZero;
+ (id)regularExpression;
+ (id)versionWithString:(id)a0;
+ (id)versionOne;
+ (BOOL)validateVersionString:(id)a0 major:(long long *)a1 minor:(long long *)a2;
+ (id)versionWithPackedUInt32:(unsigned int)a0;
+ (BOOL)validateVersionString:(id)a0;

- (long long)compare:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (BOOL)atLeastMajor:(long long)a0 minor:(long long)a1;
- (id)description;
- (BOOL)isEqualToVersion:(id)a0;
- (id)init;
- (id)initWithMajor:(long long)a0 minor:(long long)a1;
- (BOOL)isCompatibleWithVersion:(id)a0;

@end
