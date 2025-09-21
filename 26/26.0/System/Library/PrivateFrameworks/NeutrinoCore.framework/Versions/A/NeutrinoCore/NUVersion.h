@class NSString;

@interface NUVersion : NSObject

@property (readonly) long long major;
@property (readonly) long long minor;
@property (readonly) NSString *stringRepresentation;

+ (id)versionZero;
+ (BOOL)validateVersionString:(id)a0;
+ (id)regularExpression;
+ (id)versionWithString:(id)a0;
+ (id)versionOne;
+ (BOOL)validateVersionString:(id)a0 major:(long long *)a1 minor:(long long *)a2;
+ (id)versionWithPackedUInt32:(unsigned int)a0;

- (id)debugDescription;
- (BOOL)atLeastMajor:(long long)a0 minor:(long long)a1;
- (long long)compare:(id)a0;
- (id)init;
- (BOOL)isCompatibleWithVersion:(id)a0;
- (BOOL)isEqualToVersion:(id)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithMajor:(long long)a0 minor:(long long)a1;

@end
